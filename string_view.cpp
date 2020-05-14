#include <iostream>
#include <string_view>  // We can use this in c++17
 
 
#define print std::cout
#define endl std::endl
 
 //String_view strings do not make a copy of a string . They are like references to the string .
 //They should be used only if strings are consts
 //They show unexpected behaaviour when go out of scope.
 //Can be converted to strings or c_string
 //Though they are faster and do not lead to extra memory due to copying
 
void Print(std::string s)
{
	print<<s<<endl;
}
 
int main()
{
	
  std::string_view view{ "hello" };  
  print << view << endl;
  
 //Print (view);   Will not work 
 Print(static_cast<std::string>(view));    //Casting explicitly
 
 
 
  while(1);
  return 0;
}

