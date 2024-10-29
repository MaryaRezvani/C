#include <stdio.h>
int main()
{ 
    int num,count=0,n=0; 
while(1){
    printf("Enter a number:");
    scanf("%d",&num);
    if (num==0)
        break;
    n++;
    if(num%2==0)
        count++;
}
printf("\n e=%d,o=%d",count,n-count);
    return 0;
}
