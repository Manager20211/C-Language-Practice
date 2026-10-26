/*

下一步：动态数组（你最需要的功能）
之前你写 int arr[5]; 大小是写死的。如果用 malloc，你就可以在程序运行时，让用户输入需要多大的数组。

文件夹：dynamicMemory
文件：ex2DynamicArray.c

要求你自己写出下面的逻辑：

输入一个整数 n。

用 malloc 申请能装 n 个整数的数组。（提示：(int *)malloc(n * sizeof(int))）

检查指针是否为 NULL（安全锁）。

用 for 循环，让用户输入这 n 个数存入数组。

用 for 循环打印出来。

free 释放内存，并把指针置为 NULL。

*/

#include <stdio.h>
#include <stdlib.h>

int main (void){

    int n;
    
    scanf("%d", &n);

    int *p = (int *)malloc(sizeof(int)*n);

    if(p == NULL){

        printf("指针写入失败，请重试\n");

        return 1;

    }

    for(int i = 0; i<n; i++){

        scanf("%d", p+i);

    }

    for(int j =  0; j < n; j++){

        printf("%d    ", *(p+j));

    }


    free(p);
    p = NULL;

    return 0;


}