#include<stdio.h>
#include<process.h>
void LCM(int a,int b);// you can also use LCM x HCF= Product of two nos.
/*the least common multiple of two integers a and b, usually denoted by LCM(a, b), is the smallest 
POSITIVE integer that is divisible by both a and b. So the result must always be POSITIVE.*/
int main()
{
int a,b;
scanf("%d%d",&a,&b);
if(a==0||b==0)//lcm cannot be found if any no. is zero
exit(0);
LCM(a,b);
return 0;
}
void LCM(int a,int b)
{
	a=abs(a),b=abs(b);
	int i,lcm;
	i=(a>b)?a:b;//using ternary to find greater of two nos.
for(i;i<=a*b;i++)
{
	if(i%a==0&&i%b==0)
	{
		lcm=i;
		break;
	}
	}
	printf("lcm:%d",lcm);
}
