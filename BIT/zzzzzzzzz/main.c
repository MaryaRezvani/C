#include <stdio.h>

int main()
{
    int i = 999;
    {    while (i>100)

        printf("%d",i);
        i-=2;
    }


    return 0;
}
