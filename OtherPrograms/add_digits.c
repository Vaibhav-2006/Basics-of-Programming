#include<stdio.h>
int add_digits(int n);
int main()
{
	int n;
	scanf("%d",&n);
	add_digits(n);
	return 0;
}
int add_digits(int n)
{
	n=abs(n);//will help to get sum of digits even if n is negative
	int x,sum=0;
while(n>0)
{
	x=n%10;
		n/=10;
		sum+=x;}
	printf("sum:%d",sum);
}

