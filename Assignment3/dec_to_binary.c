#include<stdio.h>
#include<process.h>
void decimal_to_binary();
int main()
{
	int n;
	printf("Enter the decimal number \n");
	scanf("%d",&n);
	decimal_to_binary(n);
}
void decimal_to_binary(int n)
{
	int x,a[100],i=0,j;
	if(n==0)
	{
	printf("Binary equivalent=0");
	exit(0);}
	while(n>0)
	{
	x=n%2;
	n=n/2;
	a[i]=x;
	i++;	
	}
	printf("Binary equivalent=");
	for(j=i-1;j>=0;j--)
	{
	printf("%d",a[j]);}
}

