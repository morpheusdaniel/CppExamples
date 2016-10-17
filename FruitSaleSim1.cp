// FruitSaleSim1.cpp

#include <iostream>
#include "FruitSaleSim1.h"

using namespace std;


void FruitSeller::InitMembers(int price, int num, int money)
{
	APPLE_PRICE = price;
	numOfApples = num;
	myMoney = money;
}

bool FruitSeller::SaleApples(int money, int &num)
{
	num = money / APPLE_PRICE;
	if(numOfApples-num<0)
		return false;
	numOfApples -= num;
	myMoney += money;
	return true;
}

void FruitSeller::ShowSalesResult()
{
	cout<<"rest apples: "<<numOfApples<<endl;
	cout<<"profit: "<<myMoney<<endl<<endl;
}


void FruitBuyer::InitMembers(int money)
{
	myMoney = money;
	numOfApples = 0;
}

bool FruitBuyer::BuyApples(FruitSeller &seller, int money)
{
	int num;
	if(myMoney-money<0)
	{
		cout<<"err: no money"<<endl;
		return false;
	}
	if(!seller.SaleApples(money, num))
	{
		cout<<"err: out of stock"<<endl;
		return false;
	}
	numOfApples += num;
	myMoney -= money;
	return true;
}

void FruitBuyer::ShowBuyResult()
{
	cout<<"current balance: "<<myMoney<<endl;
	cout<<"num of apples: "<<numOfApples<<endl<<endl;
}

