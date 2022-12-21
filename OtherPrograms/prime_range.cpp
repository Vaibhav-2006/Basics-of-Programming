#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	cout<<"\n\n";
	int a,b,N,i,j,k,flag=0;
	cin>>N;
	for(i=0;i<N;i++)
	{
		int prime=0;
		cout<<"Enter lower and upper limit:";
		cin>>a>>b;
		for(j=a;j<=b;j++)
		{
			if(j==2)
			flag=1;
			for(k=2;k<j;k++)
			{
				if(j%k!=0)
				{flag=1;}
				else
				{
					flag=0;
					break;
					}	
			}
			if(flag==1)
			{cout<<j<<"\n";
			prime++;}
	}
	cout<<"\nNo. of prime numbers:"<<prime<<"\n";
}
	return 0;
}
