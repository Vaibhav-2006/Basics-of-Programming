#include<stdio.h>
int main()
{
float a,b[100];
int ch=0;
	printf("\nEnter a number:");
	scanf("\n%f",&a);
	b[0]=a;
	while(a<=100)
{
	ch++;
	b[ch]=a;
	printf("\nEnter a number:");
	scanf("\n%f",&a);
}
printf("Numbers inputted till now:");
int i=0;
for(i=0;i<=ch;i++)
printf("\nb[%d]=%f",i,b[i]);
return 0;
}

