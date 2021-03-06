#include <iostream>

#include "RNG.h"

int main() 
{
	for(int x{};x<=100;++x)
	{
		std::cout<<'\n'<<getRandomNumber(1,10);
	}
	
	return 0;
}