//RectangleMain.cpp

#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;


typedef struct __Reclist{
	int *prev;
	Rectangle body;
	int *next;
}Reclist;

int main(void)
{
	Point pos1;
	if(!pos1.InitMembers(-2, 4))
		cout<<"initializing failed(-2,4)"<<endl;
	if(!pos1.InitMembers(2, 4))
		cout<<"initializing failed(2,4)"<<endl;
	
	Point pos2;
	if(!pos2.InitMembers(5, 9))
		cout<<"initializing failed(5,9)"<<endl;
	
	Rectangle rec;
	if(!rec.InitMembers(pos2, pos1))
		cout<<"rectangle initializing failed(pos2,pos1)"<<endl;
	if(!rec.InitMembers(pos1, pos2))
		cout<<"rectangle initializing failed(pos1,pos2)"<<endl;
	
	rec.ShowRecInfo();
	return 0;
	
	
	/*
	int cmd;
	while(true)
	{
		cout<<"[1:addRec, 2:showRec]# ";
		cin>>cmd;
		
		switch(cmd)
		{
		case 1:
			Rectangle * rec1 = (Rectangle *)malloc(sizeof(Rectangle));
			
		case 2:
		}
	}
	*/
}