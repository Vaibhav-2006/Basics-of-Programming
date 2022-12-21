#include<stdio.h>
#include<math.h>
int main()
{
	float b,a,c,d,x,y;
	printf("Enter values of a \t b \t c\a\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0)
	{
	x=(-b+sqrt(d))/(2*a);
	y=(-b-sqrt(d))/(2*a);
	printf("the roots of the equation are:%f \t %f \n",x,y);
    printf("the roots of the equation are:%f \t \b\b\b\b\b\b\b %f \n",x,y);
	}
	else
	{printf("No real roots of the given eqn");
	}
return 0;	
}
