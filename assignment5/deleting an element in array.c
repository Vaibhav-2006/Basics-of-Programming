#include<stdio.h>
int main()
{
	int a[15],n,num,temp,i;
	printf("Enter no. of numbers in array:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
printf("\nEnter the index no. of number to be deleted");// element can also be deleted using linear search by asking the user the value of element to be deleted
scanf("%d",&n);
for(i=n;i<num;i++)
{
	a[i]=a[i+1];
}
for(i=0;i<num-1;i++)
{
	printf("%d\t",a[i]);
}
return 0;
}
