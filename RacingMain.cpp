// RacingMain.cpp

#include <iostream>
#include "Car.h"

using namespace std;


int main(void)
{
	Car run99;
	int cmd;
	run99.InitMembers("run99", 100);
	while(1)
	{
		cout<<"(1:Accel,2:Break,3:ShowCarState,4:FuelFill) >";
		cin>>cmd;
		switch(cmd)
		{
		case 1:
			run99.Accel();
			run99.ShowCarState();
			break;
			
		case 2:
			run99.Break();
			run99.ShowCarState();
			break;
			
		case 3:
			run99.ShowCarState();
			break;
			
		case 4:
			run99.FuelFill(40);
			break;
			
		default:
			cout<<cmd<<": command not found"<<endl;
			break;
		}
	}
	return 0;
}