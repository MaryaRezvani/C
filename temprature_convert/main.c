#include<stdio.h>
int main()
{
    float centi;
    scanf("%f",&centi);
    float fahrenheit;
    fahrenheit = centi*1.8+32;
    printf("%.2f\n%.2f",fahrenheit,centi);
    return (0);


}
