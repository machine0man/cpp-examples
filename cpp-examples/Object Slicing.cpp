#include <iostream>
#include <string>   
#include <vector>

#define print std::cout
#define endl std::endl
#define string std::string 


#include <iostream>
#include <vector>
 
 //Object Slicing
 //When derived class is saved as base class , the derived functionality is sliced out
 //Do not assign derived class to base class object Or it may lead to bad results
 
 
 
 class Base
{
protected:
    int m_value{};
 
public:
    Base(int value)
        : m_value{ value }
    {
    }
 
    virtual const char* getName() const { return "Base"; }
    int getValue() const { return m_value; }
};
 
class Derived: public Base
{
public:
    Derived(int value)
        : Base{ value }
    {
    }
 
    virtual const char* getName() const { return "Derived"; }
};
 
int main()
{
	std::vector<Base*> v{};  
//	std::vector<Base&> v{}; //Will not work as refrences are const and cant be reassigned
	
	
	
	Base b{ 5 }; // b and d can't be anonymous objects
	Derived d{ 6 };
 
	v.push_back(&b); // add a Base object to our vector
	v.push_back(&d); // add a Derived object to our vector
 
	// Print out all of the elements in our vector
	for (const auto* element : v)
		print << "I am a " << element->getName() << " with value " << element->getValue() << endl;
 
	return 0;
}
