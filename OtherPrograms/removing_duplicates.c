#include<stdio.h>
void remove_dupl(int a[10],int size)
{
	int del=0,i,j;
for(i=0;i<size-del;i++)
	{
	for(j=i+1;j<=size-1-del;j++)
	{
		if(a[i]==a[j])
		{
			a[j]=-1;
		for(j;j<size;j++)
		{
			a[j]=a[j+1];
		}
		++del;
		--i;
	}
	}
	}
	printf("Array after deleting %d duplicate elements",del);
	for(i=0;i<size-del;i++)
	{
		printf("a[%d]:",i);
		printf("%d",a[i]);
	}	
}
int main()
{
	int a[100],i,size;
	printf("Enter no. of array elements:");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		printf("a[%d]:",i);
		scanf("%d",&a[i]);
	}
	//removing duplicates
	remove_dupl(a,size);
}
