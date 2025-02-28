#include <iostream>
#include "Core.h"

void print();
extern int s;
extern const int m;

int main(int argc, char** argv) 
{
    print();
	std::cout <<  "[" << __FILE__ << "]" << s  <<std::endl;
	std::cout <<  "[" << __FILE__ << "]" << m  << std::endl;
	
	k++;
	LOG(k); // Accessing variable and Preprocessor definition from another file
	

	
	while(1);
	return 0;
}
