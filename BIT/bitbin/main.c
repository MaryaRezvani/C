#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    const int tmp = a;
    for(int i = 0;i<b;i++)
        a*=tmp;
        printf("%d\n",a);

    return 0;
}
