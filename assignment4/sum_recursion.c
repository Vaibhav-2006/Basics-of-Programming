#include<stdio.h>
int total(int n);
int main()
{
	int sum,n;
	scanf("%d",&n);
	sum=total(n);
	printf("Sum upto n=%d numbers is:%d",n,sum);
}
int total(int n)
{
	if(n==0)
	return 0;
	else
	return n+total(n-1);
}
