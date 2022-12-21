#include<stdio.h>
int main()
{
    float b,da,ta;
	printf("Enter basic salary of person:\n");
	scanf("%f",&b);
	da=10*b/100;
	ta=12*b/100;
	printf("Gross Salary:%f",b+da+ta);
	return 0;
}
