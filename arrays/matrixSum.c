/*

继续练习 2：求二维数组的总和
练习文件：ex4MatrixSum.c

要求：
还是这个 3 行 4 列的数组。
写两层 for 循环遍历它，计算出里面 12 个数字的总和，并打印出来。
（答案应该是 78：1+2+...+12）

*/

#include <stdio.h>

int main(void){

    int matrixSum = 0;

    int arr[3][4] = {

        {1,2,3,4},
        {5,6,7,8,},
        {9,10,11,12}


    };

    for(int i = 0; i<3; i++){

        for(int j = 0; j<4; j++){

            matrixSum += arr[i][j];

        }

    }

    printf("%d\n", matrixSum);

    return 0;

}