#include<stdio.h> 
#include<stdlib.h>
int main()
{
	char *s = "3.145";
	int i = atoi(s); //string to integer
	float f =atof(s); //string to float
	long l = atol(s); //string to Long 
	printf("\ninteger: %d",i); 
	printf("\nFloat: %f",f); 
	printf("\nlong: %ld",l);
	//converting number to string
	char is[35];
	char ls[35];
	char fs[35];
	sprintf(is , "%d" , i);
	sprintf(ls , "%ld" , l);
	sprintf(fs , "%f" , f);
	printf("\nint to string %s",is);
	printf("\nlong to string %s",ls);
	printf("\nfloat to string %s",fs);
}

