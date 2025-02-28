#include <iostream>
#include <string>  // We can use this in c++17
 
 
#define print std::cout
#define endl std::endl
#define string std::string 

//As you can see the use of Virtual Function 
//We can point to or reference to Derived class from Base Pointer
//Note : Parameters , return type as well as Name of the function should be same Or the function will not be over-ridden
//Whenever compiler comes at "virtual" keyword , it tries to dereference that function for the base class to the depth.




void Print(string s)
{
	print<<s<<endl;
}

class Base
{
	public :
	virtual void Name(){print << "Base" << endl;}
};
class Derived : public Base
{
	public :
		void Name(){print << "Derived" << endl;}
};
 
int main()
{
	Base b; 
	Derived d;
	b.Name(); // Base
	d.Name();  // Derived
	
	Base* pb = &d; 
	pb->Name();  //Base
	
	Base& rb = d;
	rb.Name(); //Base

	
 
  return 0;
}

