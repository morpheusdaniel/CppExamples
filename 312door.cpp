#include "312door.h"

void Door::Open(){
  state = OPEN;
}
void Door::Close(){
  state = CLOSE;
}
void Door:ShowState(){
  cout<<"State of Now:";
  cout<<((state==OPEN)? "OPEN":"CLOSE")<<endl;
}
