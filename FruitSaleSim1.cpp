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

int FruitSeller::SaleApples(int money)
{
	int num = money / APPLE_PRICE;
	numOfApples -= num;
	myMoney += money;
	return num;
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

void FruitBuyer::BuyApples(FruitSeller &seller, int money)
{
	numOfApples += seller.SaleApples(money);
	myMoney -= money;
}

void FruitBuyer::ShowBuyResult()
{
	cout<<"current balance: "<<myMoney<<endl;
	cout<<"num of apples: "<<numOfApples<<endl<<endl;
}

