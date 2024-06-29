// Greatest between no 

#include<iostream>
 using namespace std;
 
int main()
{
	float n1,n2,n3;
	
	cout<<"Enter three no: ";
	cin>>n1>>n2>>n3;
	
	if(n1>n2)
	{
		if(n1>n3)
		{
			cout<<n1<<" is Greatest no";
		}
	}
	else if (n2>n3)
	{
		cout<<n2<<" is Greatest no";
	}
	else
	{
		cout<< n3 <<" is Greatest no";
	}
	return 0;
}
