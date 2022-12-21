#include <stdio.h>
#include<math.h>

int main()
{
    float n;
    float r;
    printf("Enter a number and the number of root:");
    scanf("%f %f",&n,&r);
    printf("%f",pow(n,1/r));
    return 0;
}


