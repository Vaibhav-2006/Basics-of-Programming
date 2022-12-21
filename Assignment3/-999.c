#include<stdio.h>
int main()
{
float a;
	printf("\nEnter a number:");
	scanf("\n%f",&a);
	float sum=0;
	while(a!=-999)
{
	sum+=a;
	printf("\nEnter a number:");
	scanf("\n%f",&a);
}
printf("%f",sum);
return 0;
}

