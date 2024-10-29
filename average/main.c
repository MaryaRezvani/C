#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum,A,B,C;
    float a;
    scanf("%d%d%d",&A,&B,&C);
    sum = A+B+C;
    a = (float)sum/3;
    printf("%.2f",a);
    return 0;
}
