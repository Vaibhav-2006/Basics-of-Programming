#include<stdio.h>
int main()
{
float a,max,min;
int ch=1;
	printf("\nEnter a number:");
	scanf("\n%f",&a);
	max=a;
	min=a;
while(ch==1)
{
	printf("\nEnter a number:");
	scanf("\n%f",&a);
	if(a>max)
	max=a;
	if(a<min)
	min=a;
	printf("Enter 1 if you want to enter more nos.");
	scanf("%d",&ch);
	}	
	printf("\nmax and min are:%f\t%f",max,min);
	printf("\nTherefore range os entered nos. is:(%f,%f)",min,max);
	
return 0;	
}
