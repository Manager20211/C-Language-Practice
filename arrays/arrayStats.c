/*

练习 B 要求：

输入 5 个整数存入数组。

求这 5 个数的最大值、最小值以及平均值（用 double 输出）。

*/

#include <stdio.h>

int main(void){

    int arr1[5];

    int max;
    int min;

    printf("请在接下来输入5个整数:");

    scanf("%d", &arr1[0]);
    scanf("%d", &arr1[1]);
    scanf("%d", &arr1[2]);
    scanf("%d", &arr1[3]);
    scanf("%d", &arr1[4]);

    max = arr1[0];

    for(int i = 1; i <= 4; i++){

        if(max<=arr1[i]){

            max = arr1[i];

        }


    }

    min = arr1[0];

    for(int j = 1; j<=4; j++){

        if(min >= arr1[j]){

            min = arr1[j];

        }

    }

    printf("最大值为%d\n", max);
    printf("最小值为%d\n", min);
    printf("平均数为%lf\n", (double)(arr1[0]+arr1[1]+arr1[2]+arr1[3]+arr1[4]) / 5.0);

    return 0;


}