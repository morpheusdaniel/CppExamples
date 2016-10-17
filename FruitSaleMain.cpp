// FruitSaleMain.cpp

#include <iostream>
#include "FruitSaleSim1.h"

using namespace std;


int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000);
	
	cout<<"seller's status"<<endl;
	seller.ShowSalesResult();
	cout<<"buyer's status"<<endl;
	buyer.ShowBuyResult();
	return 0;
}