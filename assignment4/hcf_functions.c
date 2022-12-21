#include<stdio.h>
void HCF(int a,int b);
int main()
{
	int a,b;
scanf("%d%d",&a,&b);
HCF(a,b);
return 0;
}
void HCF(int a,int b)
{
	int i=1,hcf;
	
for(i=1;i<=a&&i<=b;i++)
{
	if(a%i==0&&b%i==0)
		hcf=i;
	}
	printf("hcf:%d",hcf);
}
