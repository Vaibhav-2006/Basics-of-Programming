#include<stdio.h>
int j=1;
fibonacci(int n)
{
	int a,b,sum=0;
if(j==1)
{
	a=0;
	b=1;
	printf("%d\t%d\t",a,b);
	j--;
}
		if(n>2)
		{
	sum=a+b;
	printf("%d\t",sum);
	a=b;
	b=sum;
	fibonacci(--n);
	}
	}
int main()
{
	int n;
	scanf("%d",&n);
	fibonacci(n);
	
}
