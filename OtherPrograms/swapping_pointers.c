#include<stdio.h>
int swap(int *A,int *B)
{
	int c;
    //swapping
    c=*A;
    *A=*B;
    *B=c;
	printf("Value of a:%d",*A);
	printf("\nValue of b:%d",*B); 	
}
int main()
{
	int a=10,b=20;
	swap(&a,&b);
	printf("\nValue of a:%d",a);
	printf("\nValue of b:%d",b);  
}
