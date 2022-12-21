#include<stdio.h>
#include<stdlib.h>
int search(int *a, int n, int no)
{
	int i;
		for(i=0;i<n;i++)
	{
		if(a[i]==no)
		{
return i;
	}
	}
return -1;
}
int main()
{
	int n,no,i;
	printf("Enter the number of array elements:");
	scanf("%d", &n);
printf("Enter the array:\n");
	int *a= (int*) malloc( n * sizeof(int));
	for(i=0;i<n;i++)
	{
	printf("a[%d]=",i);
		scanf("%d",&a[i]);//a[0] a[1].....a[9]
	}
	printf("Enter the number to be searched:");
	scanf("%d",&no);//a[0],a[1].....a[9]
printf("Element found at index : %d", search(a,n,no));
}


