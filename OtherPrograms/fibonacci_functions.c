#include<stdio.h>
#include<process.h>
int fib(int);
int main()
{
	int n;
	scanf("%d",&n);
fib(n);
return 0;
}
int fib(int n)
{
	if(n==0)exit(0);
	int a,b,sum,i;
	if(n==1)
	{
	printf("0");
	exit(0);}
	else if(n==2)
	{
	printf("0\t1");
	exit(0);}
	else
	{
	a=0;
    b=1;
printf("%d\t%d",a,b);
for(i=3;i<=n;i++)
{
	sum=a+b;
	a=b;
	b=sum;
	printf("\t%d",sum);
	}	
}
}


