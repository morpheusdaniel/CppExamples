// FruitSaleSim1.h

#ifndef __FRUIT_H__
#define __FRUIT_H__


class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;
	
public:
	void InitMembers(int price, int num, int money);
	bool SaleApples(int money, int &num);
	void ShowSalesResult();
};

class FruitBuyer
{
private:
	int myMoney;
	int numOfApples;
	
public:
	void InitMembers(int money);
	bool BuyApples(FruitSeller &seller, int money);
	void ShowBuyResult();
};


#endif