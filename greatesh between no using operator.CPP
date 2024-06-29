// Greatest between no using operator

#include<iostream>
using namespace std;
int main()
{
	float n1,n2,n3;
	cout<<"Enter three no: ";
	cin>>n1>>n2>>n3;
	
	if(n1>n2&&n1>n3)
	{
		cout<<n1<<" is greatest no ";
	}
	else if(n2>n3)
	{
		cout<<n2<<" is greatest no ";
	}
	else
	{
		cout << n3 <<" is greatest no ";
	}
	return 0;
}
