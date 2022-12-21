#include<stdio.h>
int main()
{
	char x,ch,c;
	scanf("%c",&x);//1st way
	printf("The inputted character is:%c\n",x);
	fflush(stdin);
	ch=getchar();//2nd way
	printf("The inputted character is:%c\n",ch);
	fflush(stdin);
	c=getc(stdin);//3rd way
	printf("The inputted character is:%c",c);
	return 0;
}
