#include <iostream>

#include "Core.h"

//To be used in main.cpp file

/*static*/ int s = 20;     // Will not be able to use static variable, it can be used within file 

extern const int m = 40;

	/* static*/  void print() // Will not be able to use static function , it can be used within file
	{
 	std::cout<<"Hello from file1.cpp " <<std::endl;	
 	LOG(45);
	}



