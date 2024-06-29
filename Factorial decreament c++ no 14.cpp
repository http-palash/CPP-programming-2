// Factorial decreament 14 c++

#include <iostream>
 using namespace std;
 int main()
 
{
 	
 	int i,n,sum=1;
 	cout<<"Enter max no of factorial series: ";
 	cin>>n;
 	for(i=n;i>=1;i--)
 	{
 		cout<<(int)i<<"*";
 		sum=i*sum;		
	}
	cout<<"="<<(int)sum;
	return 0;
}

