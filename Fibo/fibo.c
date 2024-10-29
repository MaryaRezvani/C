#include <stdio.h>

int main()
{
   int N = 30;
   int a = 0,b = 1;
   for(int i = 1; i<=N;i++)
   {
       b = b + a;
       a = b - a;
       printf("%d\n",b);
   }
    return 0;
}
