#include<stdio.h>
int main()
{
	int a[10],y;
	int *ptr=&y;
	printf("%d\n",a[0]);
	printf("%d\n",&a[0]);
	printf("%d\n",a);
	printf("%d\n",*a);
	printf("%d\n",y);
	printf("%d\n",&y);
	printf("%d\n",ptr);
	printf("%d\n",*ptr);
	printf("%d",&ptr);
	
}
