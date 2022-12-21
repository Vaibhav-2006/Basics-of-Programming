#include<stdio.h>
void main()
//Armstrong number is a number that is equal to the sum of cubes of its digits.
//In number theory, a narcissistic number in a given number base is a number that is 
//the sum of its own digits each raised to the power of the number of digits.
{
	int i,ones,tens,hund;
	for(i=1;i<500;i++)
	{
		if(i>0&&i<10){
			if(i==i*i*i)//all single digit nos. are narcissistic numbers 
			printf("%d\t",i);
	      }
		else if(i>9&&i<100)
		{
		ones=i%10;
		tens=i/10;
		if(i==ones*ones*ones+tens*tens*tens)//to check for narcissistic numbers i==ones*ones+tens*tens will be used
		printf("%d\t",i)	;
		}
		else
		{
			hund=i/100;
			tens=(i%100)/10;
			ones=(i%100)%10;
			if(i==hund*hund*hund+tens*tens*tens+ones*ones*ones)
			printf("%d\t",i);
		}
	}
}
