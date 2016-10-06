#include <iostream>

using namespace std;

void swap(int &a, int &b){
	int temp=a; a=b; b=temp;
}

void ShowData(const Vals &vals)
{
	cout<<"val1:"<<vals.val1<<' ';
	cout<<"val2:"<<vals.val2<<endl;
}

int main(void)
{
	struct _Vals{
		int val1;
		int val2;
	};
	typedef struct _Vals Vals;
	Vals vals;
	vals.val1=10;
	vals.val2=20;
	
	cout<<"val1:"<<vals.val1<<' ';
	cout<<"val2:"<<vals.val2<<endl;
	
	swap(vals.val1, vals.val2);
	ShowData(vals);
	return 0;
}
