#include "yellowdolphindownloader.h"

YellowDolphinDownloader::YellowDolphinDownloader(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
	this->refresh_interfaces_list();
}

YellowDolphinDownloader::~YellowDolphinDownloader()
{

}


void YellowDolphinDownloader::refresh_interfaces_list()
{
    using namespace std;
    ui.interfacesCombo->clear();
    DIR *hdir;
    struct dirent *entry;
    hdir = opendir("/dev");
    string filename;
    unsigned int i=0;
    std::cout<<"Searching for interfaces: \n";
    while((entry = readdir(hdir)))
    {
    	i++;
        filename=entry->d_name;
        if((filename.find("ttyS") == 0)||(filename.find("ttyUSB") == 0))
        {
            filename="/dev/"+filename;
            cout<<"Found serial interface: "<<filename<<endl;
            ui.interfacesCombo->addItem(filename.c_str());
        }

    }
        closedir(hdir);
    if(i==0)
    {
    	ui.interfacesCombo->addItem("No serial interface found");
    }
}




//SLOTS




void YellowDolphinDownloader::on_searchmultimeter_clicked()
{
	Fluke::Fluke189 FlukeMM(ui.interfacesCombo->currentText().toStdString());
	Fluke::Fluke189::RCT_ID ID_Data = FlukeMM.CMD_ID(true, 0,0);
	QString DeviceName(ID_Data.Data()->I_DeviceName);
	if(DeviceName == "FLUKE 189")
	{
		QString ID("Fluke 189 found: ");
		ID.append(ID_Data.Data()->I_ID);
		ui.searchmultimeter->setText(ID);
	}
	else
	{
		ui.searchmultimeter->setText("No Fluke 189 found - Search Again");
	}
}



void YellowDolphinDownloader::on_refreshInterfacesBut_clicked()
{
	refresh_interfaces_list();
}



void YellowDolphinDownloader::on_downloadButton_clicked()
{
	if(ui.radioDownloadSave->isChecked())
	{
		Fluke::Fluke189 FlukeMM(ui.interfacesCombo->currentText().toStdString());
		std::cout<<"Downloading SAVE data.."<<std::endl;

		Fluke::Fluke189::RCT_QD2 DATA = FlukeMM.CMD_QD2(true, this, YellowDolphinDownloader::Wrapper_to_progress_bar);


		std::cout<<DATA.Data()->I_DataCount<<std::endl;
	}
	else if(ui.radioDownloadLog->isChecked())
	{
		Fluke::Fluke189 FlukeMM(ui.interfacesCombo->currentText().toStdString());
		std::cout<<"Downloading LOG data.."<<std::endl;
	}
	else if(ui.radioUseBinFileDL->isChecked())
	{
		std::cout<<"Importing data from binary file.."<<std::endl;
	}
	else
	{
	    QMessageBox::critical( this, "YellowDolphinDownloader - Error",
	                              "There is no radioButton selected for download!\n"
	                              "Huh? That should never happen - to resolve this select one" );
	}
}
