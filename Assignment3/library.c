#include<stdio.h>
#include<process.h>
int main()
{
	int no;
	printf("Enter number of days:");
	scanf("%d",&no);
	if(no<=0)
	{
	printf("Wrong input");
	exit(0);// if n is 0 that means book is on time
}
	else{
	if(no>0&&no<6)//It is not written in the ques that fine is charged per day
	printf("The fine is 50 paisa");
	else if(no>=6&&no<=10)
	printf("The fine is 1 rupee");
	else if(no>=11&&no<=30)
	printf("The fine is 5 rupees");
	else
	printf("Membership Cancelled");
}
	return 0;
}

