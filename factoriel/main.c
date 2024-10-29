#include <stdio.h>

int main()
{
    long int fact;
    int i,num;
    for(;;){
        printf("\ntype a number:");
        scanf("%d",&num);
        fact = 1;
        for(i=1;i<=num;i++)
            fact*=i;
        printf("factorial is :%d",fact);
    }

    return 0;
}
