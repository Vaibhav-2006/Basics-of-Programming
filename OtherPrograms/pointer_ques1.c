#include<stdio.h>
int main()
{
	int x,*x_=&x;
	x=10;
	float y,*y_=&y;
    y=100;
	char z,*z_=&z;
	z='A';
	printf("Address of x:%d\n",&x);
	printf("Address of x:%d\n",x_);
	printf("Address of y:%d\n",&y);
	printf("Address of y:%d\n",y_);
	printf("Address of z:%d\n",&z);
	printf("Address of z:%d\n",z_);
	printf("Value of x:%d\n",x);
	printf("Value of x:%d\n",*x_);
	printf("Value of y:%f\n",y);
	printf("Value of y:%f\n",*y_);
	printf("Value of z:%c\n",z);
	printf("Value of z:%c\n",*z_);
	printf("Value of z in integer:%d\n",z);
	
	
}
