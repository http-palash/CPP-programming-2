// LOOP 7

#include <iostream>
using namespace std;
int main()
{
	int sum=0,n,m,rem;
	
	cout<<"Enter no to check it is armstrong or not: ";
	cin>>n;
	m=n;
	
	while(n>0)
	{
		rem=n%10;
		sum=rem*rem*rem+sum;
		n=n/10;
	}
	if(m==sum)
	{
		cout<<m<<" is armstrong no";
	}
	else cout<<m<<" is not a armstrong no";
	
	return 0;
}
