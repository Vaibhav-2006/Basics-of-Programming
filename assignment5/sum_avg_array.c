#include<stdio.h>
#include<process.h>
int main()
{
	float a[100];
	int n,i;
	float sum=0.0,avg;
	scanf("%d",&n);
	if(n<=0) exit(0);
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	avg=sum/n;
	printf("Sum=%f\nAverage=%f",sum,avg);
	return 0;
}
