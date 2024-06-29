// Fahrenheit to celsius

#include <iostream>
using namespace std;
int main()
{
      float fahrenheit,celsius;
      
	  cout<<"Enter fahrenheit = ";
	  cin>>fahrenheit;
	
	  celsius=(fahrenheit-32)*5/9;
	  
	  cout<<"There are "<<celsius<<" celsius"<<" in "<<fahrenheit<<" fahrenheits";
	
	return 0;
}
