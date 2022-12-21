#include<stdio.h>
int main()
{
	int x,*x_=&x;
	x=10;
	float y,*y_=&y;
    y=100;
	char z,*z_=&z;
	z='A';
	printf("Sizeof of x_:%d\n",sizeof(x_));
	printf("Sizeof of y_:%d\n",sizeof(y_));
	printf("Sizeof of z_:%d\n",sizeof(z_));
}
