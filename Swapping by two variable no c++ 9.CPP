// Swapping by two variable no 9

#include<iostream>
 using namespace std;
 
int main()
{
	float n1,n2;
	cout<<"Enter 1st no: ";
	cin>>n1;
	cout<<"Enter 2nd no: ";
	cin>>n2;
	
	n1=n1+n2;
	n2=n1-n2;
	n1=n1-n2;
	
	cout<<"On swapping n1= "<<n1;
	cout<<"\nOn swapping n2= "<<n2;
	return 0;
}
