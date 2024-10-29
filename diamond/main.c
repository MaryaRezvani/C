#include <stdio.h>
#include <string.h>
void diamond (char a[100]);
int main()
{
    char x[100];
    scanf("%s",x);
    diamond(x);
    return 0;
}
void diamond (char a[100])
{
    for (int i = 0; i < strlen(a); i++)
    {
        for(int j = 0; j <= i; j++)
           printf("%c",a[j]);
       printf("\n");
    }
    for (int i = 1; i < strlen(a); i++)
    {
        for (int z = 0; z < i; z++)
            printf(" ");
        for (int j = i; j < strlen(a); j++)
           printf("%c",a[j]);
        printf("\n");
    }
}

