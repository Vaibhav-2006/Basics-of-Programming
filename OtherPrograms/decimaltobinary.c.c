// use arrays in assignment 5
#include<stdio.h>
void decimal_to_binary();
void decimal_to_octal();
void decimal_to_hexadecimal();
int main()
{
	int n,t,v,bin,oct,hex;
	printf("Enter the decimal number \n");
	scanf("%d",&n);
	decimal_to_binary(n);
	
	decimal_to_octal(n);
	
	decimal_to_hexadecimal(n);
}
void decimal_to_binary(int n)
{
	int x,s=0;
	while(n>0)
	{
	x=n%2;
	n=n/2;
	s=(s*10)+x;		
	}

	printf("Binary equivalent=%d\n",s);
}
void decimal_to_octal(int t)
{
	int p,a=0;
	while(t>0)
	{
	p=t%8;
	t=t/8;
	a=(a*10)+p;		
	}
  	printf("Octal equivalent=%d\n",a);	
}
void decimal_to_hexadecimal(int v)
{
	int q,b=0;
	while(v>0)
	{
	q=v%16;
	v=v/16;
	b=(b*10)+q;		
	}
 	printf("Hexadecimal equivalent=%d\n",b);		
}

