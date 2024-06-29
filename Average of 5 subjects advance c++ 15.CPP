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
		if(s1<33)
    	{
    	 printf("\nMarks in 1st subject= %.2f  FAIL\n",s1);
		}
		else
		{
    	 printf("Marks in 1st subject= %.2f\n",s1);
        }
     	if(s2<33)
    	{
    	 printf("Marks in 2nd subject= %.2f  FAIL\n",s2);
		}
		else
		{
    	 printf("Marks in 2nd subject= %.2f\n",s2);
        }
    	if(s3<33)
    	{
    	 printf("Marks in 3rd subject= %.2f  FAIL\n",s3);
		}
		else
		{
    	 printf("Marks in 3rd subject= %.2f\n",s3);
        }
    	if(s4<33)
    	{
    	 printf("Marks in 4th subject= %.2f  FAIL\n",s4);
		}
		else
		{
    	 printf("Marks in 4th subject= %.2f\n",s4);
        }
    	if(s5<33)
    	{
    	 printf("Marks in 5th subject= %.2f  FAIL\n",s5);
		}
		else
		{
    	 printf("Marks in 5th subject= %.2f\n",s5);
        }
		
		printf("\nTotal marks=%.2f \tPercentage=%.2f \t",total,percentage);

	if(percentage<33)
	{
		cout<<"Fail";
	}
	else if(percentage>33)
	{
		cout<<"Division=Third \t (Pass)";
	}
	else if(percentage>50)
	{
		cout<<"Division=second \t (Pass)";
	}
	else if(percentage>60)
	{
		cout<<"Division=First \t (Pass)";
	}
	return 0;
}
