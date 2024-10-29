#include <stdio.h>

int main()
{
    int a = 12;//a=>00001100
    //*Bitwise  2s complement of any number N is -(N+1)
    printf("out put = %d\n",~11);//-12
    printf("out put = %d\n",~12);//-13
    printf("\nout put = %d\n",~12);//-13
    printf("out put = %d\n",~-12);//11
    //12 in binary = 00...01100
    //~12 = -(111....10011)+1 = -(111..10`00) = -13
    //~-12 = -(-111...10011)+1 = -(-11...10010) = 11
    return 0;
}
