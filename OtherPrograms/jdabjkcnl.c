#include<stdio.h>
int main()
{
	char a[5]={'a','b','c','d','e'};
	printf("%d\t%d\t%d\t%d\t%d",a,a+1,a+2,a+3,a+4);
}
//a---> lvalue of a[0]
//*a--> at address(lvalue of a[0])-->rvalue a[0]
//10
//a+1-->a[1]
//*(a+1)-->*( lvalue a[1])--> 20
//*a+1-->a[0]+1-->1
//*a=*a+1
//rvalue of a[0]= rvalue of a[0]+1
