// All arithematic operation no 8 

#include <iostream>
 using namespace std;

int main()
{
	float n1,n2,n3,sum,subtract,div,mul,rem;
	cout<<"Enter 1st no: ";
	cin>>n1;
	cout<<"Enter 2nd no: ";
	cin>>n2;

	
	
	sum=n1+n2;
	subtract=n1-n2;
	div=n1/n2;
	mul=n1*n2;
	rem=int(n1)%int(n2);
    cout<<"\n\nSum of two no is: "<<sum;
    cout<<"\nSubtraction two no is: "<<subtract;
    cout<<"\ndivision of the two no is: "<<div;
    cout<<"\nMultiplication of two no is: "<<mul;
    cout<<"\nremainder two no is: "<<rem;
    
	return 0;
}


