#include<stdio.h>
int main()
{
	int n,i,j,temp=0;
	int a[6]={1,2,3,4,5,6};
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	for(j=0;j<6;j++)
    	{
    		if(j==5)
    		{
    			a[0]=temp;
			}
			else if(j==0)
			{
    		temp=a[j+1];
    		a[j+1]=a[j];
		}
		else
		{
			a[j+1]=temp;
		}
		}
	}
	for(i=0;i<6;i++)
	printf("%d\t",a[i]);
}
