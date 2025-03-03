#include <iostream>
#include <string>  // We can use this in c++17
 
 
#define print std::cout
#define endl std::endl
#define string std::string 



void Print(string s)
{
	print<<s<<endl;
}

class A
{
public:
	virtual const char* getName1(int x) { return "A"; }
	virtual const char* getName2(int x) { return "A"; }
	virtual const char* getName3(int x) { return "A"; }
};
 
class B : public A
{
public:
	//virtual const char* getName1(short int x) override { return "B"; } // compile error, function is not an override
	//virtual const char* getName2(int x) const override { return "B"; } // compile error, function is not an override
	virtual const char* getName3(int x) override { return "B"; } // okay, function is an override of A::getName3(int)
 
};
 
int main()
{
	return 0;
}
