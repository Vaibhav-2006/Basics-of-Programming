#include<stdio.h>
int main()
{
	int n,i,j,temp=0,t;
	int a[6]={1,2,3,4,5,6};
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {//right rotation
    //similarly left rotation can be done and answer will be same
    	for(j=0;j<6;j++)
    	{
    		if(j==5)
    		{
    			t=a[0];
    			a[0]=temp;//temp=a[5]
			}
			else if(j==0)
			{
    		temp=a[j+1];
    		a[j+1]=a[j];
		}
		else
		{
			t=a[j+1];
			a[j+1]=temp;
			temp=t;
		}
		}
	}
	for(i=0;i<6;i++)
	printf("%d\t",a[i]);
}
