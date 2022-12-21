#include<stdio.h>
#include<process.h>
int main()
{
	float x,n,value=1;
	int i;
	printf("Enter the number and its power:");
	scanf("%f%f",&x,&n);
	if(x==0)
	{
		if(n<=0)// 0 raised to power 0 or a negative number is not defined
{
		printf("Not defined");
		exit(0);}
		else 
		printf("Value of x raised to power n is:0");
	}
	else if(n>0)
	{
	for(i=1;i<=n;++i)
	{
		value*=x;	
	}
	printf("Value of x raised to power n is:%f",value);
	exit(0);
	}
	else
	{
		for(i=-1;i>=n;--i)
		{
			value*=x;
		}
		printf("Value of x raised to power n is:%f",1/value);
		exit(0);
	}
	return 0;
}
