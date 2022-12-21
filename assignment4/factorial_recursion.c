#include<stdio.h>
int product=1;
int factorial(int n);
int main()
{
	int n,product;
	scanf("%d",&n);
	product=factorial(n);
	printf("%d",product);
	return 0;
}
int factorial(int n)
{
	if(n==1||n==0)
	return 1;
	else
	return n*factorial(n-1);
}
