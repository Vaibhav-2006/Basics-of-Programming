#include<stdio.h>
#include<math.h>
int main()
{
	float b,a,c,d,x,y,x_a,x_b,y_a,y_b;//ax^2+bx+c=0
	printf("Enter values of a,b,c:");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>=0)
	{
	x=(-b+sqrt(d))/(2*a);
	y=(-b-sqrt(d))/(2*a);
	printf("the roots of the equation are:%.2f%.2f",x,y);
	}
	else
	{printf("No real roots of the given eqn\n");
	//Using a+ib form
     printf("Imaginary roots are:%f + i%f and %f - i%f",-b/(2*a),sqrt(-d)/(2*a),-b/(2*a),sqrt(-d)/(2*a));
	}
return 0;	
}
