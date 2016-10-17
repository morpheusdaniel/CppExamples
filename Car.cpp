// Car.cpp

#include <iostream>
#include <cstring>
#include "Car.h"

using namespace std;


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