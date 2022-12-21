#include<stdio.h>
#include<stdlib.h>
int asc_sort(int c[],int size);
int desc_sort(int c[],int size);
int main()
{
	int n,i;
	printf("Enter size of array:");
	scanf("%d",&n);
	int *a= (int*) malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}
	asc_sort(a,n);
	printf("\n");
	desc_sort(a,n);
	return 0;
}
int asc_sort(int c[],int size)
{
	int i=0,temp,j=0;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{//if we use j=0, we will get array sorted in descending order
				if(c[j]<c[i])
		{
			temp=c[i];
			c[i]=c[j];
			c[j]=temp;
		}
		}
	}
	for(i=0;i<size;i++)
	printf("a[%d]=%d\t",i,c[i]);
}
int desc_sort(int *c, int size)
{
int i=0,temp,j=0;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
				if(c[j]>=c[i])
				{
			temp=c[i];
			c[i]=c[j];
			c[j]=temp;
		}
		}
	}
	for(i=0;i<size;i++)
	printf("a[%d]=%d\t",i,c[i]);	
}
