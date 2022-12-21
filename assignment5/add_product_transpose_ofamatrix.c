    #include<stdio.h>
void add(int a[3][3],int b[3][3]);
void product(int a[3][3],int b[3][3]);
void transpose(int a[3][3]);
int main()
{
	int a[3][3],b[3][3],i,j;
	for(i=0;i<3;i++)
	{ 	printf("\n");
		for(j=0;j<3;j++)
		{
		printf("Enter a[%d][%d]",i,j);
		scanf("%d",&a[i][j]);
		printf("Enter b[%d][%d]",i,j);
		scanf("%d",&b[i][j]);	
	}
	}
	for(i=0;i<3;i++)
	{ 	printf("\n");
		for(j=0;j<3;j++)
		{
			printf("a[%d][%d]= %d\t",i,j,a[i][j]);
		}}
		printf("\n\n");
		for(i=0;i<3;i++)
	{ 	printf("\n");
		for(j=0;j<3;j++)
		{
			printf("b[%d][%d]= %d\t",i,j,b[i][j]);
		}}
	
	add(a,b);
	product(a,b);
	transpose(a);
}
void add(int a[3][3],int b[3][3])
{//check condition for order of array
	int c[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		c[i][j]=a[i][j]+b[i][j];	
		}
	}
	for(i=0;i<3;i++)
	{
			printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
	
}
void product(int a[3][3],int b[3][3])
{//check condition for order of array
	int c[3][3],i,j,k=0;
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	c[i][j]=0;}
	for(i=0;i<3;i++)
	{
		k=0;
		while(k<=2)
		{
		for(j=0;j<3;j++)
		{
		c[i][k]+=a[i][j]*b[j][k];	
		}
		++k;
		j=0;
	}
	}
	for(i=0;i<3;i++)
	{
			printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",c[i][j]);
		}
	}
	
}
void transpose(int a[3][3])
{int temp,i,j;
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
		temp=a[i][j];
		a[i][j]=a[j][i];
		a[j][i]=temp;	
		}
	}
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
}

