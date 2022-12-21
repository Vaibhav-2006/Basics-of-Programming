#include<stdio.h>
#include<process.h>
int next(int j,int *p);
int A_point=0,B_point=0;
int main()
{
int N,i,card,j;
scanf("%d",&N);
for(i=1;i<=N;i++)//i=3 16
{
	j=N-i;//12
	scanf("%d",&card);
if(card==11&&j>=1||card==12&&j>=2||card==13&&j>=3||card==1&&j>=4)
{
if(card==11)
next(1,&i);
else if(card==12)
next(2,&i);
else if(card==13)
next(3,&i);
else if(card==1)
next(4,&i);
i--;
}
}}
int next(int j,int *p)
{
int card,k=*p;
for(*p=*p+1;*p<=k+j;*p=*p+1)//4 4<=7 6(12)//*p=7 7<=8//8(11)//9 9<=9//9(12)
{//10 10<=11//11(1)//12 12<=15//12(13)//13//13<=15//14(11)//15(6)//16
scanf("%d",&card);
if(card==11)
next(1,p);
else if(card==12)
next(2,p);
else if(card==13)
next(3,p);
else if(card==1)
next(4,p);
	}
(k%2==1)?printf("A scores %d points\n",j):printf("B scores %d points\n",j);
if(k%2==1)
A_point+=j;
else
B_point+=j;
if(*p==16){
printf("A scores:%d \nB scores:%d",A_point,B_point);	
exit(0);
}}
