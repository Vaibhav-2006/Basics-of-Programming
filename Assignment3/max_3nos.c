#include<stdio.h>
#include<process.h>
int main()
{
float a,b,c,max;
int ch;
printf("Enter three nos.");
scanf("%f%f%f",&a,&b,&c);
printf("1.If 2.else if 3.nested if:");
scanf("%d",&ch);
switch(ch)
{
//using if
case 1://using if
if(a>=b&&a>=c)
{
max=a;}
if(b>=a&&b>=c)//b>=c condition alone as in the case of if else cannot be used 
{
max=b;}
if(c>=a&&c>=b)
{
max=c;}
break;
case 2://using else if
if(a>=b&&a>=c)
{
max=a;}
else if(b>=c)
{
max=b;}
else
{
max=c;}
break;
case 3:// using nested if
if(a>=b)
{
	if(a>=c)
	max=a;
	else
	max=c;}
	else
	{
	if(b>=c)
	max=b;
	else
	max=c;
}
break;
default:
printf("Wrong choice entered\n");
exit(0);
}
printf("Max is:%f",max);
return 0;	
}
