#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,i,k;
    printf("enter a number:\n");
    scanf("%d",&k);
   for(i=1;i<=k/2 ;i++)
    {

   if (k%i==0)
        sum+=i;
    }
   if(k==sum)
     printf("\nthe a is complate");
   else
     printf("\nthe a is not complate");
    return 0;
}
