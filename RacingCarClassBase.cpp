//RacingCarClassBase.cpp

#include <iostream>
#include <cstring>

using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN=20, MAX_SPD=200, FUEL_STEP=2,
		ACC_STEP=10, BRK_STEP=10
	};
}

class Car
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int maxFuel;
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(char *ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
	void FuelFill(int fuel);
};

void Car::InitMembers(char *ID, int fuel)
{
	strcpy(gamerID, ID);
	maxFuel = fuel;
	fuelGauge = fuel;
	curSpeed=0;
}
void Car::ShowCarState()
{
	cout<<"onwer's ID: "<<gamerID<<endl;
	cout<<"fuel gauge: "<<fuelGauge<<"%"<<endl;
	cout<<"current speed: "<<curSpeed<<"km/s"<<endl<<endl;
}
void Car::Accel()
{
	if(fuelGauge<=0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;
	
	if((curSpeed+CAR_CONST::ACC_STEP)>=CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}
void Car::Break()
{
	if(curSpeed<CAR_CONST::BRK_STEP)
	{
		curSpeed=0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}
void Car::FuelFill(int fuel)
{
	if(fuel+fuelGauge>=maxFuel)
	{
		cout<<"Fuel Overflowed!"<<endl;
		return;
	}
	fuelGauge += fuel;
}

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



