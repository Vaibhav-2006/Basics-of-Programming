#include<stdio.h>
int main()
{
	int i,A[20],max,min,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("Enter %d numbers",n);
for(i=0;i<n;i++)
{
	scanf("%d",&A[i]);               
}
max=A[0];
min=A[0];
for(i=0;i<n;i++)
{
if(A[i]>max)    
{ max=A[i];
	}	
	else if(A[i]<min)
	{
		min=A[i];
	}
}
printf("max and min are: %d%d",max,min);
return 0;
}
