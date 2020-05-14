#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

#define print std::cout 
#define endl std::endl


//Simplest Event & Delegate example to have an idea


void Print (std::string s)  
{
	print<< s << endl;
}

class Delegate
{
typedef void (*func)(std::string);
	
	public :
	void Bind (func f )
	{
		_func = f;
	}
	
	void Invoke(std::string s)
	{
		_func(s);
	}
	
	private:
		func _func ;
	
};


int main()
{

Delegate delegate;
delegate.Bind(&Print);
delegate.Invoke("Jot");




return 0;
}

