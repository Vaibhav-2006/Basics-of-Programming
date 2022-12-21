#include<stdio.h>
int main()
{
	int no;
	printf("Enter number:");
	scanf("%d",&no);
	if(no%5==0&&no%8==0)
	printf("Number is divisible by 5 and 8");
	else if(no%8==0)
	printf("Number is only divisible by 8");
	else if(no%5==0)
	printf("Number is only divisible by 5");
	return 0;
}

	
	
