#include<stdio.h>
void main()
{
	float a,b,result;
	int x,y,ch;
	printf("1.add 2.multiply 3.divide 4.remainder 5.subtract:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			scanf("%f%f",&a,&b);
			result=a+b;
			break;
			case 2:
				scanf("%f%f",&a,&b);
				result=a*b;
				break;
				case 3:
					scanf("%f%f",&a,&b);
					result=a/b;
					break;
					case 4://only int operands allowed
						scanf("%d%d",&x,&y);
						result=x%y;
						break;
						case 5:
							scanf("%f%f",&a,&b);
							result=a-b;
							break;
						default:
							printf("Wrong choice");
							break;
}
	printf("%f",result);
}
