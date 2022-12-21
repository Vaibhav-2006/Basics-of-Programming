#include<stdio.h>
void nprimes(int n);
int main()
{
	int p;
	printf("Enter number of prime numbers to be displayed:");
	scanf("%d",&p);//2 3 5 7 11
	nprimes(p);printf("\n");
	nprimes(8);
	printf("\n");
	nprimes(10);
	printf("\n");
	nprimes(11);
	printf("\n");
	return 0;
}
void nprimes(int n)//n=p
{	int i,flag=2,ch=0,j;
	if(n==0)
	printf("You have chosen to display no prime numbers");
	else
	{
		for(i=2;ch<n;i++)
		{
			flag=2;
		    for(j=2;j<i;j++)
		    {
			if(i%j==0)
			{
				flag=1;
			}}
			if(flag==2)
			{
				++ch;
				printf("%d\t",i);
			}
		}
}}
