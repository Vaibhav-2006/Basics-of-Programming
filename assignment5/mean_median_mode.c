#include<stdio.h>
#include<process.h>
int sort(int c[],int size);
int mode(int c[],int size);
int main()
{
	int x[100],n,i;
	float mean=0,median;
	printf("Enter no. of array elements to be entered:");
	scanf("%d",&n);
	if(n<=0)
	exit(0);
	//please enter positive values less than 1000 or mode can generate wrong output
	for(i=0;i<n;i++)
	{
	printf("a[%d]:",i);
	scanf("%d",&x[i]);
	mean+=x[i];//sum	
	}
	mean=(float)mean/n;//mean=sum/n
	sort(x,n);
	printf("\n");
	for(i=0;i<n;i++)
	printf("x[%d]=%d\t",i,x[i]);//to prove that arrays are always passed by reference in c
	if(n%2==0)
	{
		median=(x[n/2]+x[n/2-1])/2;
	}
	else
	{
		median=x[n/2];
	}
	printf("\nMean:%f\t Median:%f\n",mean,median);
	mode(x,n);
}
int sort(int c[],int size)
{
	int i=0,temp,j=0;
	for(i=0;i<size;i++)
	{
		for(j=i;j<size;j++)//selection sort
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
	printf("x[%d]=%d\t",i,c[i]);
}
int mode(int c[],int size)
{
	int d[1000];// array c must not have a number greater than 1000
	int i,max=0,Max=0;
		for(i=0;i<1000;i++)
    	d[i]=0;
	for(i=0;i<size;i++)
	{
		++d[c[i]];
		if(d[c[i]]>max)
		{
		    max=d[c[i]];
            Max=c[i];	}}
            if(max==1)
            printf("All numbers appear once and there is no mode");
            else
            printf("The mode is:%d and its frequency is:%d",Max,max);
}

