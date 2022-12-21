#include<stdio.h>
void Union(int a[],int size);
void intersection(int a[],int b[],int A,int B);
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
		intersection(a,b,A,B);
		//union is a keyword and hence cant be an identifier
		Union(c,A+B);
		return 0;
	}
	void intersection(int a[],int b[],int A,int B)
	{
// Make sure there are no duplicate elements in the same array.
//for example is there are 2 10's in a[] and one 10 in b[] then 2 10's will be present in the output.
//to solve this problem we can call Union to remove duplicates in each individual array.
		int i,j,d[A+B],ch=0;
		for(i=0;i<A;i++)
		{
			for(j=0;j<B;j++)
			{
				if(a[i]==b[j])
				{
					d[ch]=a[i];
					ch++;
					break;//so that if A has an element=10 and B has 10 two times then 10 is reflected only once in the intersection array
				}
			}
		}
		printf("\nThe intersection of the 2 arrays is:\n");
		for(i=0;i<ch;i++)
		{
			printf("%d\t",d[i]);
		}
	}
	void Union(int a[],int size)
	{  
		//removing duplicates
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
	printf("\nThe union of the 2 arrays is:\n");
	for(i=0;i<size-del;i++)
	{
		printf("a[%d]:",i);
		printf("%d",a[i]);
	}	
}
