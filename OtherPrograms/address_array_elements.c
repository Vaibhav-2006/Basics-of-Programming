#include<stdio.h>
int main()
{
	int i;
	int x[5]={1,2,3,5,6};
	float y[5]={1.1,2.2,3.3,4.4,5.5};
	char a[5]={'a','s','f','d','g'};
	for(i=0;i<5;i++)
	printf("%d\t",&x[i]);
	printf("\n");
	for(i=0;i<5;i++)
	printf("%d\t",&y[i]);
	printf("\n");
	for(i=0;i<5;i++)
	printf("%d\t",&a[i]);
	return 0;
}
	
