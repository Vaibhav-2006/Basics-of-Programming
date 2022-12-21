#include<stdio.h>
void main()
{
	int i,factorial=1,n,a,b;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i+=1)//factorial
	{
		factorial*=i;
	}
	printf("factorial: %d",factorial);
	scanf("%d%d",&a,&b);//add and subtract
	a+=b;
    b-=a;// will give -a
	printf("a:%d, b:%d",a,b);
}
