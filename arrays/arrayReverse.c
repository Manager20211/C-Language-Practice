/*

练习文件名：ex3ArrayReverse.c

要求：

输入 5 个整数存入数组。

把数组里的元素逆序打印出来。

例如：输入 1 2 3 4 5，输出 5 4 3 2 1。

提示：不用交换数组里的位置，直接从最后一个下标 i = 4 倒着遍历打印到 i = 0 即可。

*/

#include <stdio.h>

int main(void){

    int arr1[5];

    for(int i = 0; i <=4; i++){

        scanf("%d", &arr1[i]);

    }

    for(int j = 4; j>=0 ; j--){

        printf("%d  ", arr1[j]);

    }

    return 0;

}