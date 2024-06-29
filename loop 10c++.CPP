// checking prime no using for loop

#include<iostream>
using namespace std;
int main()
{
 int i,n,c=0;

 cout<<"Enter a no : ";
 cin>>n;
 for(i=2;i<n;i++)
 {
  if(n%i==0)
  {
   c=1;
   break;
   }
  }
   if(c==0)
   {
     cout<<n<<" is a prime no ";
   }
    else
    {
     cout<<n<<" is not a prime no ";
    }
    return 0;
}
