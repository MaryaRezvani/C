#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char input[100];
    scanf("%s",&input);
    int length=strlen(input);
    int number_of_repet=0;
    for(int i=1;i<10;i++){
        for(int j=0;j<length;j++){
            if(((int)input[j]-48)==i)
            number_of_repet++;
    }

if(number_of_repet!=0)
    printf("%d:%d\n",i,number_of_repet);
number_of_repet=0;}
return 0;}
