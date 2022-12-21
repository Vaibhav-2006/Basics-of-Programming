#include<stdio.h>
#include<process.h>
int fib(int a,int b,int ch,int n);
int main()
{
	int n;
	printf("Enter the number of fibonacci terms:");
	scanf("%d",&n);
	if (n==0)
	exit(0);
	if(n==1)
	{
	printf("0");
	}
	else if(n==2)
	{
	printf("0\t1\t");}
	else
	{
	printf("0\t1\t");
	fib(0,1,2,n);}//2 numbers have already been printed
}
int fib(int a,int b,int ch,int n)
{
	if(ch<n)//ch is there to keep the count
	{
	printf("%d\t",a+b);
	fib(b,a+b,++ch,n);
    }
    exit(0);
}
