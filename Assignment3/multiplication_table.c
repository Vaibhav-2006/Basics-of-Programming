#include<stdio.h>
int main()
{
	float x;
	int i;
	printf("Enter the number:");
	scanf("%f",&x);
	for(i=1;i<=10;i++)
	{
		printf("%f x %d=%.3f\n",x,i,x*i);
	}
	return 0;
}
