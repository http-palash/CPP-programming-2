// Simple interest no 11

#include<iostream>
 using namespace std;
 
int main()
{
	float si,p,r,t;
	cout<<"Enter principle: ";
	cin>>p;
	cout<<"Enter rate: ";
	cin>>r;
	cout<<"Enter time: ";
	cin>>t;
	
	si=p*r*t/100;
	
	cout<<"Simple interest= "<<si;
	return 0;
}
