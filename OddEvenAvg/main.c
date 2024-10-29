#include <stdio.h>
#include <string.h>
int main()
{
    char n[20];
    scanf("%s",&n);
    int even = 0, count_even = 0;
    int odd = 0, count_odd = 0;
    for (int i = 0; i < strlen(n);i++){
        if((int)n[i]%2 == 0){
            even += ((int)n[i]-48);
            count_even++;
        }
        else{
            odd += ((int)n[i]-48);
            count_odd++;
        }
    }
    if(count_even==0)
        count_even=1;
    if(count_odd==0)
        count_odd=1;
    printf("%.0f\n%.0f",(float)odd/(float)count_odd ,(float)even/(float)count_even);
    return 0;
}
