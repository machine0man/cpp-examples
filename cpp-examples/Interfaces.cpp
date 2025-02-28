#include <iostream>
#include <string>   


#define print std::cout
#define endl std::endl
#define string std::string 


//Interface 
//Interfaces are (abstract) classes with all function virtual and no variable
//They are kind of a definition without implementation


class IDebug  // Interface to force derived classes to implement its virtual functions
{ 
	public:
	 virtual void Log() = 0;
	
};
 
 class FileDebug : public IDebug
{ 
	public:
	 void Log() override
	 {
	 	print << "File Debug Log"<<endl;
	 }
	
};
 class ScreenDebug : public IDebug
{ 
	public:
	  void Log()override
	 {
	 		print << "Screen Debug Log"<<endl;
	 }
	
};
 
 float Divide(float numerator , float denominator , IDebug& Debug)   // I just need the name of Interface
 {
 	if(denominator == 0) 
	 {
	  Debug.Log();
	 return 0.0; 
	  }
 	
 	else return numerator/denominator;
 }
 
 float Open(string path ,IDebug& Debug)
 {
 	Debug.Log();
 	return 0.0;
 }

int main()
{
 ScreenDebug SDebug;
 FileDebug FDebug;
 
 int m = Divide(100 , 0 , SDebug);
  int n = Open("AnyString", FDebug);


	
	
	return 0;
}
