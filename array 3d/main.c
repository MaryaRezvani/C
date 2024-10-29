#include <stdio.h>
int main()
{
    int arr[3][5][3]={{{1,9,0},{1,9,8},{2,7,5},{1,8,6},{1,4,2}},
                      {{1,7,6},{1,2,3},{9,0,8},{7,5,4},{0,6,2}}
    };
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 3; k++)
                {
                    printf("ARRAY IS [%d][%d][%d] = %d\t",i , j, k, arr[i][j][k]);

                }
                printf("\n");}}
    return 0;
}
