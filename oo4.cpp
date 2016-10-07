#include <iostream>
using std::cout;
using std::endl;

class Account {
public:
  char accID[20];
  char secID[20];
  char name[20];
  int balance;
  
  void Deposit(int money){
    balance += money;
  }
  void Withdraw(int money){
    balance -= money;
  }
};

int main(void)
{
  Account yoon = {"1234", "2321", "yoon", 1000};
  
  yoon.Deposit(100);
  cout<<"Exist:"<<yoon.balance<<endl;
  
  yoon.Withdraw(200);
  cout<<"Exist:"<<yoon.balance<<endl;
  return 0;
}
