#include<stdio.h>
int main()
{
	int a[100],i,j=0,temp,n;
	printf("Enter no. of elements in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter a number\n");
		scanf("%d",&a[i]);
	}
	for(i=0,j=n-1;i<n/2;i++,j--)
	{
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;
	}
		for(i=0;i<n;i++)
		{
		printf("a[%d]=%d\t",i,a[i]);
	}
	return 0;
}
