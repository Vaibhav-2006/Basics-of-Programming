#include<stdio.h>
int main()
{
	int a=10,b=20,c;// scanf can also be used so that user enters value at run-time 
	c=a;
	a=b;
	b=c;
	printf("swapped values of a and b are: %d \t %d",a,b);
return 0;}
