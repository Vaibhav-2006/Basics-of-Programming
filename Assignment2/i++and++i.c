#include<stdio.h>
void main()
{
	int i=10,j=10,result,Result;
	result=++i;// gives i=11 and then assigns result=i
	Result=j++;// assigns Result=j and then gives j=11
	printf("value of result and i:%d \t %d \n",result,i);
	printf("value of Result and j:%d\t %d \n",Result,j);
}
