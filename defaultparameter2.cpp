#include <iostream>

int BoxVolume(int length, int width=1, int height=1);

int main()
{
	std::cout<<"[3,3,3]			: "<<BoxVolume(3,3,3)<<std::endl;
	std::cout<<"[5,5,def]		: "<<BoxVolume(5,5)<<std::endl;
	std::cout<<"[7,def,def]	: "<<BoxVolume(7)<<std::endl;
	return 0;
}

int BoxVolume(int length, int width, int height)
{
	return length*width*height;
}
