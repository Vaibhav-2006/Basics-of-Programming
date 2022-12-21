#include<stdio.h>
#include<process.h>
int Bin(int a[],int beg,int end,int middle,int num)
{
if(a[middle]==num) 
{
printf("Element found at position:%d and index number:%d",(middle)+1,middle);
exit(0);
}
if(beg==end)
{
	printf("Element not found");
    exit(0);
}
	if(a[middle]<num)// 10 20 30 40 50 60
	Bin(a,middle+1,end,(middle+1+end)/2,num);
	if(a[middle]>num)
	Bin(a,beg,middle-1,(beg+middle-1)/2,num);
}
int main()
{
	int i,size,a[10],num;
	printf("Enter size of array:");
	scanf("%d",&size);
	if(size<=0)
	exit(0);
	for(i=0;i<size;i++)
	{
	printf("Enter element:");
	scanf("%d",&a[i]);
}
printf("Enter the number to be searched for:");
scanf("%d",&num);
Bin(a,0,size-1,(0+size-1)/2,num);
return 0;
}
