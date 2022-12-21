#include<stdio.h>
int main()
{
float a,sum,c=1.0,max,min,i,avg;
	printf("\nEnter a number:");
	scanf("\n%f",&a);
	max=a;
	min=a;
    sum=a;
for(i=0;i<9;i++)
{
	a=0;
	printf("\nEnter a number:");
	scanf("\n%f",&a);
	sum+=a;
	if(a>max)
	max=a;
	if(a<min)
	min=a;
	++c;
	}	
	avg=sum/c;
	printf("\navg=%f:",avg);
	printf("\nmax and min are:%f\t%f",max,min);
	
return 0;	
}
