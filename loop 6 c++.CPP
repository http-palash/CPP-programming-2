// LOOP 6

#include <iostream>
using namespace std;
int main()
{
	int rev=0,n,m,rem;
	
	cout<<"Enter no to check it is palidrome or not: ";
	cin>>n;
	m=n;
	
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(m==rev)
	{
		cout<<m<<" is palidrome no";
	}
	else cout<<m<<" is not a palidrome no";
	
	return 0;
}
