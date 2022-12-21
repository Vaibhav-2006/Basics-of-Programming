#include<stdio.h>
#include<process.h>
int factorial(int n);
int main()
{
	int a,prod;
	scanf("%d",&a);
	prod=factorial(a);
	printf("%d",prod);
	return 0;
}
int factorial(int n){
	if(n<0)
return;	//exit(0);//factorial is undefined for a negative number
int prod=1,i=1;
for(i=1;i<=n;i++)
{
	prod*=i;
}
return prod;
}
