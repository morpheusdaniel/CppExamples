#include <iostream>

using std::cout;
using std::endl;

const int OPEN = 1;
const int CLOSE = 2;

class Door{
private:
  int state;
  
public:
  void Open();
  void Close();
  void ShowState();
};
