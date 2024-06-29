// Average of 5 subjects

#include<iostream>
 using namespace std;
 
int main()
{
	float total,percentage,s1,s2,s3,s4,s5;
	cout<<"Enter marks of First subject: ";
	cin>>s1;
	cout<<"Enter marks of Second subject: ";
	cin>>s2;
	cout<<"Enter marks of Third subject: ";
	cin>>s3;
	cout<<"Enter marks of Fourth subject: ";
	cin>>s4;
	cout<<"Enter marks of Fifth subject: ";
	cin>>s5;
	
	total=s1+s2+s2+s3+s4+s5;
	percentage=total/5;
	
	cout<<"Total Marks="<<total<<" \n percentage=" <<percentage;
	return 0;
}
