#include<stdio.h>
void withvar(int a,int b);
void without(int a,int b);
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("\nswapping values of a=%d and b=%d\n",a,b);
	withvar(a,b);
	without(a,b);
	return 0;
}
void withvar(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	printf("swapped values are a=%d\tb=%d\n",a,b);
	
}
void without(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swapping values without third variable a=%d\tb=%d ",a,b);
}
