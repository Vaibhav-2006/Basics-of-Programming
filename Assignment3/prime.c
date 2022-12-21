#include<stdio.h>
#include<process.h>
void prime(int n);
int main()
{
	int p;
	printf("Enter number:");
	scanf("%d",&p);
	prime(p);
	return 0;
}
void prime(int n)
{
	int i;
	if(n<=1)//prime numbers are only positive
	printf("Number is neither prime nor composite");
	else
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				printf("Number is composite");
				exit(0);
			}
		}
	if(i==n)
	printf("The number is prime");	
	}
}
