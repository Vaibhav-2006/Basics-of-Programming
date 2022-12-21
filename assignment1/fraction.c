#include<stdio.h>
int main()
{
	float c,d;
	printf("Enter the numerator:");
	scanf("%f",&c);
	printf("Enter the denominator:");
	scanf("%f",&d);
	printf("The inputted fraction is:%f/%f=%f",c,d,c/d);
	return 0;
}
