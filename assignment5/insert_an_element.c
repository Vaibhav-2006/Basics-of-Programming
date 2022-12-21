#include<stdio.h>
int main()
{
	int a[100],n,j,t,num,temp,i;
	printf("Enter no. of numbers in array:");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%d",&a[i]);
	}
printf("\nEnter the new number and its index number in array:");
scanf("%d%d",&n,&j);
for(i=j;i<num+1;i++)
{
	if(i==j){
	temp=a[i];
	a[i]=n;
	t=a[i+1];
	a[i+1]=temp;
	}
	else
	{
	temp=a[i+1];
    a[i+1]=t;
    t=temp;}
}
for(i=0;i<num+1;i++)
{
	printf("%d\t",a[i]);
}

}

