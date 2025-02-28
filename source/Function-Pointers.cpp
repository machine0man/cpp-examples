#include <iostream>
#include <vector>

using namespace std;


int PrintHello(int a , int b)
{
	std::cout<<"Hello"<<std::endl;
	return 0;
}


int Add(int a , int b)
{
	return a+b;
}
int Multiply(int a , int b)
{
	return a*b;
}


void SingleFunctionPointerExample()
{
	//Single Function Pointer
int (*function)(int a ,int b) = PrintHello;     
int x = function(2,9);
/*  OR

Note : We can use or not use "*" and "&" 

void (*function)();
function = &PrintHello;

(*function)();   
*/
	
}

void FunctionPointersArrayExample()
{
	//Array of Function Pointers
int (*functionsArray[])(int a , int b) = {Add , Multiply , PrintHello};

for(int i=0;i<3;i++)
{
	std::cout<<(*functionsArray[i])(4,9)<<std::endl;
}

	
}


int main()
{
SingleFunctionPointerExample();
FunctionPointersArrayExample();


std::vector<int> v;
v = {1,2,3,4,5};


return 0;
}
