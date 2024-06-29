// Even no series

#include <iostream>
using namespace std;
int main()
{
	int i=0,n;
	
	cout<<"Enter max no for even nmo series: ";
	cin>>n;
	
	while(i<=n)
	{
		if(i%2==0)
		{
			cout<<i<<"\t";
		}
	 i++;
	}
	return 0;
}
