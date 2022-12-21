#include<stdio.h>
int main()
{
	int i,n,ch=0;
	for(i=1;i<=20;i++)
	{
		scanf("%d",&n);
		if(n%2==0)
		++ch;
	}
	printf("Total number of even numbers:%d",ch);
	return 0;
}
