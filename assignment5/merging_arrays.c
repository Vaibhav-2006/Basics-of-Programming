#include<stdio.h>
int sort(int c[],int size);
int main()
{
	int a[100],b[100],A,B,i,j,k,c[200];
	printf("Enter sizes of two arrays:");
	scanf("%d%d",&A,&B);
	for(i=0;i<A;i++)
	{
		printf("\na[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(j=0;j<B;j++)
	{
	printf("\nb[%d]=",j);
		scanf("%d",&b[j]);//j=B, b[B-1]		
	}
	for(i=0;i<A;i++)
	{
		c[i]=a[i];//c[0]=a[0],c[1]=a[1],c[2]=a[2]....c[A-1]=a[A-1]-->A-1+1=A--A<A-->0,i=A,c[A-1],
		}	
		for(j=0;j<B;j++,i++)
		{
			c[i]=b[j];//c[A]=b[0],c[A+1]=b[1]....j=B c[A+B-1] will be the last element
		}
		for(i=0;i<A+B;i++)
		{
			printf("%d\t",c[i]);
		}
		sort(c,A+B);
		return 0;
}
int sort(int c[],int size)
{
	int i=0,temp,j=0;
	for(i=0;i<size;i++)//i<A+B
	{
		for(j=i;j<size;j++)//selection sort
		{
				if(c[j]<c[i])
				{
			temp=c[i];
			c[i]=c[j];
			c[j]=temp;
		}
		}
		printf("\nc[%d]=%d",i,c[i]);
	}
	printf("\n");
	for(i=0;i<size;i++)
	printf("c[%d]=%d\t",i,c[i]);
}


