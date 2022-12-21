#include<stdio.h>
#include<math.h>
//Compound Interest= p((1+r/n)^(nt))-p, where r is in decimal i.e r/100
// The above formula does not calculate the amount
int main()
{
    float p,r,t,n,ch,x;
	printf("Enter Principal, Rate of Interest in decimal ,Time in years, and No. of times that interest is compunded per unit time:\n");
	scanf("%f%f%f%f",&p,&r,&t,&n);
	printf("Compound Interest:%f",(p*pow(1+(r/n),n*t))-p);
	return 0;
}
