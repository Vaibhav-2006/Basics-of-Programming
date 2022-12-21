#include<stdio.h>
int main()
{
char a;
printf("Enter any character:");
a=getchar();// scanf is not used as it ignores spaces
if(a>=65&&a<=90)
{
printf("The entered character is an upper case letter");
}
else if(a>=97&&a<=122)
{
printf("The entered character is a lower case letter");
}
else if(a>=48&&a<=57)
{
printf("%c is an integer",a);
}
else if(a==32)
{
	printf("You entered space");
}// also else if statement can be used to check if "enter" is pressed using else if(a==10)
else
{
printf("%c is a symbol",a);
}
return 0;
}
