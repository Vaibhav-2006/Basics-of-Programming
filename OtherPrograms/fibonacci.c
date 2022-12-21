#include<stdio.h>
void main()
{
int a,b,sum,i,n;
printf("Enter the no. of fibonacci terms:");
scanf("%d",&n);
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
