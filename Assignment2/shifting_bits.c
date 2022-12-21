#include<stdio.h>
void main()
{
	int a=4;//4 is binary is 0100
	printf("Shifting right by 2 bits %d \n",a>>2);
	printf("Shifting right by 4 bits %d \n",a>>1);
	printf("Shifting left by 2 bits %d \n",a<<2);
	printf("Shifting left by 2 bits %d \n",a<<4);
}
