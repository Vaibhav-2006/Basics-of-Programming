#include<stdio.h>
int main()
{
	long long int no;// so that even a large number can be checked
	printf("Enter number:");
	scanf("%d",&no);
    if(no%2==0)//even or odd
    printf("\nNumber is even\n");
    else
    printf("\nNumber is odd\n");
    if(no>0)//positive or negative
    printf("Number is positive");
    else if(no==0)
    printf("Number is neither positive nor negative, it is zero");
    else
    printf("Number is negative");
    return 0;
}
