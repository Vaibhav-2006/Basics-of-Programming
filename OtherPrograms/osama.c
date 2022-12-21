#include<stdio.h>
#include<string.h>
int lessprime(int n);
int upperprime(int n);
int main()
{
int i,a[50];
char str[50];
int n,low,up,z,j,k;
for(i=0;;i++)
{
scanf("%c",&str[i]);
if(str[i]=='\n')
{
	break;
}
}
for(i=0;;i++)
{
	if(str[i]=='\n')
{
	break;
}
n=(int)str[i];
low=lessprime(n);
up=upperprime(n);
z=((n-low)>=(up-n))?up:low;
int q=n/z;
printf("%d",q);
a[j++]=q;
}
for(i=0;i<j-1;i++)
{
	printf("%d",a[i]);
}
return 0;
}
int lessprime(int n)
{
	int i,ch=0,j;
		for(i=n;i>1;i--)
		{
			ch=0;
			for(j=2;j<i;j++)
			{
			if(i%j==0)
			{
				ch++;
				}	
			}
			if(ch==0)
			{
				return i;
			}
			}
}
int upperprime(int n)
{
	int i,ch=0,j;
		for(i=n+1;;i++)
		{
			ch=0;
			for(j=2;j<i;j++)
			{
			if(i%j==0)
			{
				ch++;
				}	
			}
			if(ch==0)
			{
				return i;
			}
			}
}
