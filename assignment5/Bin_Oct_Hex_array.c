#include<stdio.h>
int main(){
	int a[100],i=0,n,num,j,b[100],k=0,l,x,y,temp,p,q=0;
	char c[100];
	printf("\nenter number:\n");
		scanf("%d",&num);
		x=num;
		y=num;
	while(num>0){
		a[i]=num%2;
		num=num/2;
		i++;
	}
printf("\nbinary form is:\n");
for(j=i-1;j>=0;j--){
	printf("%d",a[j]);
}


	while(x>0){
		b[k]=x%8;
		x=x/8;
		k++;
	}
printf("\noctal form is:\n");
for(l=k-1;l>=0;l--){
	printf("%d",b[l]);
}


while(y>0){
		temp=y%16;
		y=y/16;
		if(temp>=0&&temp<=9){
			c[p]=(char) (temp+48);// if temp is zero we store it as 48 so that printing using %c
		}// 48 will be converted to a character which is 0. ASCII values of 0-9 range from 48-57
		else if(temp>=10&&temp<=15){
		c[p]=(char) (temp+55);// A is stored as 65 as %c will result in A.ASCII values of A-Z range from 65-90
		}
		p++;
}

printf("\nhexadecimal form is:\n");
for(q=p-1;q>=0;q--){
	printf("%c",c[q]);
}
	
}
