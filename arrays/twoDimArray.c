#include <stdio.h>

int main(void){

    int arr[3][4]={

        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}

    };

    for(int i = 0; i <=2; i++){

        for(int j = 0; j<= 3; j++){

            printf("%d\t", arr[i][j]);   //第一次的时候还是写成一维数组，造成输出了垃圾值(写错的时候是arr[j])

        }

        printf("\n");

    }

    return 0;


}