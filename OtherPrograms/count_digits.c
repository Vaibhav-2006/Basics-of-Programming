#include<stdio.h>
int count_digits(int n);
int main()
{
	int n;
	scanf("%d",&n);
	add_digits(n);
	
	return 0;
}
int count_digits(int n)
{
	int c=1;
 while(n>9)
 {
 	n=n/10;
 	++c;
 }
printf("%d",c);	
}
