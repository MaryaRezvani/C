#include <stdio.h>

int main()
{
    int a,b;
    a=25,b=38;//25:011001 ** 38:100110
    //a&b
    int m = a & b;//0000000
    printf("%d\n",m);
    //a&&b
    int n = a&&b;//1->True
    printf("%d\n",n);
    //a|b
    int p = a|b;//11111:63
    printf("%d\n",p);
    //a||b
    int x = a||b;//1->True
    printf("%d\n",x);
    //a^b
    int y = a^b;//111111:63
    printf("%d\n",y);
    //~a&~b
    int z = ~a&~b;//-64
    printf("%d\n",z);
    return 0;
}
