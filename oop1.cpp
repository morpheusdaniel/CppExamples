#include <iostream>

using namespace::std;
const int NAME_LEN = 20;
const int ARRAY_LEN = 100;

typedef struct _Account
{
  int id;												// 계좌번호
	int balance;									// 잔액
	char name[NAME_LEN];					// 이름
} Account;

Account pArray[ARRAY_LEN];			// Account 저장을 위한 배열
int index=0;										// 저장된 Account 수

void PrintMenu();								// 메뉴 출력
void MakeAccount();							// 1. 계좌 개설
void Deposit();									// 2. 입금
void Withdraw();								// 3. 출금
void Inquire();									// 4. 잔액 조회

enum{MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

int main(void)
{
	int choice;
	
	while(1)
	{
		PrintMenu();
		cout<<"선택 :";
		cin>>choice;
		
		switch(choice)
		{
			case MAKE:
				MakeAccount();
				break;
			case DEPOSIT:
				Deposit();
				break;
			case WITHDRAW:
				Withdraw();
				break;
			case INQUIRE:
				Inquire();
				break;
			case EXIT:
				return 0;
			default:
				cout<<"Illegal selection.."<<endl;
				break;
			}
	}
	return 0;
}

void PrintMenu()
{
	cout<<"------Menu------"<<endl;
	cout<<"1. 계좌 개설"<<endl;
	cout<<"2. 입금"<<endl;
	cout<<"3. 출금"<<endl;
	cout<<"4. 잔액 조회"<<endl;
	cout<<"5. 프로그램 종료"<<endl;
}

void MakeAccount()
{
	int id;
	char name[NAME_LEN];
	int balance;
	
	cout<<"------계좌 개설------"<<endl;
	cout<<"계좌 ID : ";			cin>>id;
	cout<<"이름 : ";				cin>>name;
	cout<<"입금액 : ";				cin>>balance;
	
	pArray[index].id=id;
	pArray[index].balance=balance;
	strcpy(pArray[index].name, name);
	
	index++;
}

void Deposit()
{
	int money;
	int id;
	
	cout<<"계좌 ID : ";			cin>>id;
	cout<<"입금액 : ";				cin>>money;
	
	for(int i=0;i<index;i++)
	{
		if(pArray[i].id == id)
		{
			pArray[i].balance += money;
			cout<<"입금 완료"<<endl;
			return;
		}
	}
	cout<<"유효하지 않은 ID입니다."<<endl;
}

void Withdraw()
{
	int money;
	int id;
	
	cout<<"계좌 ID : ";			cin>>id;
	cout<<"출금액 : ";				cin>>money;
	
	for(int i=0; i<index;i++)
	{
		if(pArray[i].id == id)
		{
			if(pArray[i].balance < money)
			{
				cout<<"잔액 부족"<<endl;
				return;
			}
			pArray[i].balance-=money;
			cout<<"출금 완료"<<endl;
			return;
		}	
	}
	cout<<"유요하지 않은 ID입니다."<<endl;
}

void Inquire()
{
	for(int i=0;i<index;i++)
	{
		cout<<"계좌 ID : "<<pArray[i].id<<endl;
		cout<<"이름 : "<<pArray[i].name<<endl;
		cout<<"잔액 : "<<pArray[i].balance<<endl<<endl;
	}
}
