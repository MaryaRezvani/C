#include <stdio.h>
#include <string.h>
void printArr_Rec(char *arr)
{
    if(*arr)
    {
        printArr_Rec(arr+1);
        printf("%c\n",*arr);
    }
}
int main()
{
    char a[100]={'\0'};
    scanf("%s",&a);
            printArr_Rec(a);
            return 0;
}
