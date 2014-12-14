#include "yellowdolphindownloader.h"


YellowDolphinDownloader::YellowDolphinDownloader(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);
	this->refresh_interfaces_list();

	//Register Type for slot/signal usage

	int i= qRegisterMetaType<Fluke::Fluke189::RCT_QD0>();
	std::cout<<"Reg:"<<i<<std::endl;
	i=qRegisterMetaType<Fluke::Fluke189QD0Logging::Fluke189Value_t>();
	std::cout<<"Reg:"<<i<<std::endl;



	//primary plot

	primaryPlot =new QFlukePlotter();
	primaryPlot->setCanvasBackground(Qt::black);

	primaryValueCurve=new QFlukePlotCurve();
	primaryMaxCurve=new QFlukePlotCurve();
	primaryMinCurve=new QFlukePlotCurve();
	primaryAvgCurve=new QFlukePlotCurve();

	primaryValueCurve->attach(primaryPlot);
	primaryMaxCurve->attach(primaryPlot);
	primaryMinCurve->attach(primaryPlot);
	primaryAvgCurve->attach(primaryPlot);

	primaryValueCurve->setPen(QPen(Qt::yellow,1));
	primaryMaxCurve->setPen(QPen(Qt::red,1));
	primaryMinCurve->setPen(QPen(Qt::blue,1));
	primaryAvgCurve->setPen(QPen(QColor(255,255,0,255),1));

    primaryValueCurve->setSymbol(new QwtSymbol(QwtSymbol::XCross,QBrush(Qt::transparent),QPen(Qt::yellow,1),QSize(7,7)));
    primaryMaxCurve->setSymbol(new QwtSymbol(QwtSymbol::Triangle,QBrush(Qt::transparent),QPen(Qt::red,1),QSize(7,7)));
    primaryMinCurve->setSymbol(new QwtSymbol(QwtSymbol::DTriangle,QBrush(Qt::transparent),QPen(Qt::blue,1),QSize(7,7)));
    primaryAvgCurve->setSymbol(new QwtSymbol(QwtSymbol::Diamond,QBrush(Qt::transparent),QPen(QColor(255,255,0,100),1),QSize(7,7)));


	//secondary plot

	secondaryPlot =new QFlukePlotter();
	secondaryPlot->setCanvasBackground(Qt::black);

	secondaryValueCurve=new QFlukePlotCurve();
	secondaryMaxCurve=new QFlukePlotCurve();
	secondaryMinCurve=new QFlukePlotCurve();
	secondaryAvgCurve=new QFlukePlotCurve();

	secondaryValueCurve->attach(secondaryPlot);
	secondaryMaxCurve->attach(secondaryPlot);
	secondaryMinCurve->attach(secondaryPlot);
	secondaryAvgCurve->attach(secondaryPlot);

	secondaryValueCurve->setPen(QPen(Qt::yellow,1));
	secondaryMaxCurve->setPen(QPen(Qt::red,1));
	secondaryMinCurve->setPen(QPen(Qt::blue,1));
	secondaryAvgCurve->setPen(QPen(QColor(255,255,0,255),1));

    secondaryValueCurve->setSymbol(new QwtSymbol(QwtSymbol::XCross,QBrush(Qt::transparent),QPen(Qt::yellow,1),QSize(7,7)));
    secondaryMaxCurve->setSymbol(new QwtSymbol(QwtSymbol::Triangle,QBrush(Qt::transparent),QPen(Qt::red,1),QSize(7,7)));
    secondaryMinCurve->setSymbol(new QwtSymbol(QwtSymbol::DTriangle,QBrush(Qt::transparent),QPen(Qt::blue,1),QSize(7,7)));
    secondaryAvgCurve->setSymbol(new QwtSymbol(QwtSymbol::Diamond,QBrush(Qt::transparent),QPen(QColor(255,255,0,100),1),QSize(7,7)));


	//Adding plots to window

	ui.verticalLayout_VP->addWidget(primaryPlot);
	ui.verticalLayout_VP->addWidget(secondaryPlot);

	//Connections

	connect(this->ui.interfacesCombo,SIGNAL(editTextChanged(QString)),&remlog,SLOT(setInterface(QString)));

    connect(&remlog,SIGNAL(handOverSerialResponse(Fluke::Fluke189::RCT_QD0)),&remanalysis,SLOT(getFluke189_QD0(Fluke::Fluke189::RCT_QD0)));
    connect(&remanalysis,SIGNAL(updateCurrentValues(QString,QString,QString,QString,QString,QString,QString,QString)),this,SLOT(updateCurrentValues(QString,QString,QString,QString,QString,QString,QString,QString)));
    connect(&remanalysis,SIGNAL(setGraph(uint,uint,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t)),this,SLOT(addPlotValues(uint,uint,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t,Fluke::Fluke189QD0Logging::Fluke189Value_t)));


    connect(&remanalysis,SIGNAL(primary_reset()), this, SLOT(reset_primary_plot()));
    connect(&remanalysis,SIGNAL(secondary_reset()), this, SLOT(reset_secondary_plot()));


    connect(this->ui.pushButton_ResetPri,SIGNAL(clicked(void)),&remanalysis,SLOT(reset_primary(void)));
    connect(this->ui.pushButton_ResetPri,SIGNAL(clicked(void)),this->ui.label_priMax,SLOT(clear(void)));
    connect(this->ui.pushButton_ResetPri,SIGNAL(clicked(void)),this->ui.label_priMin,SLOT(clear(void)));
    connect(this->ui.pushButton_ResetPri,SIGNAL(clicked(void)),this->ui.label_priAverage,SLOT(clear(void)));

    connect(this->ui.pushButton_resetSec,SIGNAL(clicked(void)),&remanalysis,SLOT(reset_secondary(void)));
    connect(this->ui.pushButton_resetSec,SIGNAL(clicked(void)),this->ui.label_secMax,SLOT(clear(void)));
    connect(this->ui.pushButton_resetSec,SIGNAL(clicked(void)),this->ui.label_secMin,SLOT(clear(void)));
    connect(this->ui.pushButton_resetSec,SIGNAL(clicked(void)),this->ui.label_secAverage,SLOT(clear(void)));


}

YellowDolphinDownloader::~YellowDolphinDownloader()
{
	//terminate running processes on quit...
	if(remlog.isRunning())
	{
		remlog.stop();
	}
	if(remanalysis.isRunning())
	{
		remanalysis.stop();
	}
	remlog.wait();
	remanalysis.wait();
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
            remlog.setInterface(ui.interfacesCombo->currentText());
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
	ui.downloadOutputBox->setDisabled(1);
	ui.downloadButton->setDisabled(1);
	ui.downloadSelectBox->setDisabled(1);
	ui.tab_remote->setDisabled(1);
	ui.tab_settings->setDisabled(1);

	if(ui.radioDownloadSave->isChecked())
	{
		Fluke::Fluke189 FlukeMM(ui.interfacesCombo->currentText().toStdString());
		std::cout<<"Downloading SAVE data.."<<std::endl;
		Fluke::Fluke189::RCT_QD4 DATA = FlukeMM.CMD_QD4(true, this, YellowDolphinDownloader::Wrapper_to_progress_bar);


		std::cout<<DATA.Data()->I_DataCount<<std::endl;
	}
	else if(ui.radioDownloadLog->isChecked())
	{
		Fluke::Fluke189 FlukeMM(ui.interfacesCombo->currentText().toStdString());
		std::cout<<"Downloading LOG data.."<<std::endl;

		Fluke::Fluke189::RCT_QD0 CURSTAT = FlukeMM.CMD_QD0(true, 0,0);
		Fluke::Fluke189::RCT_QD2 DATA;

		//Look if LOG is displayed / And if we are not in MEM View -> If so ask User if we shall proceed
		if(CURSTAT.Data()->I_QDInfo.I_S_Log && CURSTAT.Data()->I_QDInfo.I_MEMclr!=3)
		{
		    switch( QMessageBox::information( this, "YellowDolphinDownloader - Multimeter in LOG Mode!",
		        "The Multimeter on this interface is currently in logging mode\n"
		    	"Your download will possibly take longer,\n"
		    	"because of junk data from previous logs.\n"
		    	"(progress bar will not be used)\n\n"
		        "Do you want go ahead with downloading?\n(NOT RECOMMENDED)",
		        "&Download", "&Stop",
		        0,      // Enter == button 0
		        2 ) ) { // Escape == button 2
		    case 0: // Save clicked or Alt+D pressed or Enter pressed.
		    	DATA = FlukeMM.CMD_QD2(true, 0,0);
		        break;
		    }

		}
		else
		{
			DATA = FlukeMM.CMD_QD2(true, this, YellowDolphinDownloader::Wrapper_to_progress_bar);
		}
	}
	else if(ui.radioUseBinFileDL->isChecked())
	{
		std::cout<<"Importing data from binary file.."<<std::endl;
	}
	else
	{
	    QMessageBox::warning( this, "YellowDolphinDownloader - Error",
	                              "There is no radioButton selected for download!\n"
	                              "Huh? That should never happen - to resolve this select one" );
	}
	ui.downloadOutputBox->setEnabled(1);
	ui.downloadButton->setEnabled(1);
	ui.downloadSelectBox->setEnabled(1);
	ui.tab_remote->setEnabled(1);
	ui.tab_settings->setEnabled(1);
}

void YellowDolphinDownloader::on_pushButton_remlog_query_clicked()
{
	static bool on_Noff;
	if(!on_Noff)
	{
		on_Noff=true;
		this->ui.pushButton_remlog_query->setText("Stop Querying");
		remlog.start();
		remanalysis.start();
	}
	else
	{
		on_Noff=false;
		this->ui.pushButton_remlog_query->setText("Start Querying");
		remlog.stop();
		remanalysis.stop();
		//Wait for Processes to End
		//if we do not wait here and the user does a double click
		//it will not start again in the current session
		//There is no other thing necessary here (like a process) or something...
		//It should not take long to end it
		remlog.wait();
		remanalysis.wait();
	}

}

void YellowDolphinDownloader::updateCurrentValues(QString priValue,
												  QString priMin,
												  QString priMax,
												  QString priAvg,
												  QString secValue,
												  QString secMin,
												  QString secMax,
												  QString secAvg)
{
	this->ui.label_priValue->setText(priValue);
	this->ui.label_priMin->setText(priMin);
	this->ui.label_priMax->setText(priMax);
	this->ui.label_priAverage->setText(priAvg);
	this->ui.label_secValue->setText(secValue);
	this->ui.label_secMin->setText(secMin);
	this->ui.label_secMax->setText(secMax);
	this->ui.label_secAverage->setText(secAvg);
}

void YellowDolphinDownloader::reset_primary_plot()
{
	this->primaryValueCurve->clearData();
	this->primaryMinCurve->clearData();
	this->primaryMaxCurve->clearData();
	this->primaryAvgCurve->clearData();
	this->primaryPlot->replot();
}

void YellowDolphinDownloader::reset_secondary_plot()
{
	this->secondaryValueCurve->clearData();
	this->secondaryMinCurve->clearData();
	this->secondaryMaxCurve->clearData();
	this->secondaryAvgCurve->clearData();
	this->secondaryPlot->replot();
}

