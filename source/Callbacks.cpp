#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

#define print std::cout
#define endl std::endl

int x = 5;

void FxDispatcher(void(*fun)())
{
(*fun)();
		
}
 
void Fx1(int x)
{
	print << x  << endl ;
}

void Fx2()
{
	print << "Hello"  << endl ;
}


int main()
{

 

auto fx =  &Fx2;
FxDispatcher(fx);

return 0;
}

