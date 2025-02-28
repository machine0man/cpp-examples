#include <iostream>
#include <vector>
#include <functional>   //for Lambda functions
#include <algorithm>    //for for_each 

/*
Syntax:
[capture clause](parameters) -> return type
{
function body
}



*/

//Global Variables
 std::vector<int> v {6,9,8,5,7,10 };


//Basic Methods
void PrintVector(std::vector<int> v)
{
for_each(v.begin() , v.end() , [](int i){
	
	std::cout<<i << " ";
});
std::cout<<std::endl;

}




//Examples Methods
void JustPrintVector()
{
	
	PrintVector(v);
}
void FindFirstGreatestNum()
{
	
	std::vector <int >:: iterator p = std::find_if(v.begin() , v.end() , [](int i)
	{
		return i > 7; // returns first num greater then specified number
	}
	);
	
	std::cout<<*p<<std::endl;
	
}

void SortUsingLambdaExpression()
{
	std::sort(v.begin(), v.end() , [](const int& a ,const int& b ) -> bool
	{
	return a>b;	
	}
	);
	PrintVector(v);
	
}

void CountNumsGreaterthan()
{
	int n = std::count_if(v.begin(), v.end() , [](int i )
	{
		return i > 7;
	});	
	
	std::cout<<n<<std::endl;
}

int main()
{
	JustPrintVector();
	FindFirstGreatestNum();
	SortUsingLambdaExpression();
	CountNumsGreaterthan();
	
	
	return 0;
}
