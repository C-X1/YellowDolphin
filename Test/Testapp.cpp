//============================================================================
// Name        : Testapp.cpp
// Author      : Christian Holl
// Version     :
// Copyright   : GNU Public Licence
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <string>
using namespace std;

//#define _DEBUG_INCOMING_SERIAL_DATA_

#include "Fluke189.hpp"
#include "inttypes.h"
#include <string>
#include "CalTime.hpp"


	void Dec_Hex_Bin(string name, long long value,unsigned int size)
	{
		cout<<name<<":\t\t\t"<<dec<<value<<"(d)\t\t\t"<<setw(size/8)<<hex<<value<<"(h)\t\t\t"<<setw(1);
		for(int i=size-1;i>=0;i--)
		{
			unsigned int mask=pow(2,i);
			if(mask & value)
			{
				cout<<1;
			}
			else
			{
				cout<<0;
			}
		}
		cout<<"(b)"<<endl;
	}









int main()
{
	Fluke::Fluke189 Device("/dev/ttyUSB0");

		Fluke::Fluke189::RCT_ID ID_R = Device.CMD_ID(true,0,0);

		cout<<"Multimeter ID is:"<<ID_R.Data()->I_ID<<endl;

		Fluke::Fluke189::RCT_QS QS_R = Device.CMD_QS(true,0,0);

		LibCalTime::CalTime TimeLocal(LibCalTime::TSM_NOW);
		LibCalTime::CalTime TimeMM(false,0,0,0,(QS_R.Data()->I_MMTime/10));
		LibCalTime::CalTime DayZero=TimeLocal-TimeMM;

		cout<<"Multimeter Time starts on:"<<DayZero<<endl<<endl;

		Fluke::Fluke189::RCT_QD0 QD0_R = Device.CMD_QD0(true,0,0);

		Fluke::Fluke189QD0Logging Logger;

		while(1)  //TEST Stuff for Logging with QD0
		{
			Fluke::Fluke189::RCT_QD0 QD0_R = Device.CMD_QD0(true,0,0);

			Logger.addContainer(QD0_R);

			cout<<"Pri:"<<Logger.get_Primary_ValueAndUnit_String()<<std::endl;
			cout<<"Sec:"<<Logger.get_Secondary_ValueAndUnit_String()<<std::endl;


		}
		return 0;
}

