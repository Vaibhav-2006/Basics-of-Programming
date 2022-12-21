#include<stdio.h>
int main()
{
	float p,r,t;
	printf("Enter Principal, Rate of Interest and Time:\n");
	scanf("%f%f%f",&p,&r,&t);
	printf("Simple Interest:%f",p*r*t/100);
	return 0;
}
