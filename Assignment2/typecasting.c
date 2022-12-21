#include<stdio.h>
void main()
{
	int a=6, b=4;
	double c,d;
	c=a/b;//int/int will result in int which will then be changed to double by adding .000000
	d=(double)a/b;
	printf("%lf \t %lf",c,d);
}
