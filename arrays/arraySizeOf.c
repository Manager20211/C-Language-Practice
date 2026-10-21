/*

要求：

用 sizeof 计算并打印一个包含 8 个 double 类型元素的数组，它的元素个数是多少。

提示：

c
double arr[8];
int len = sizeof(arr) / sizeof(arr[0]);
输出这个 len。

*/

#include <stdio.h>

int main (void){

    double arr1[8];
 
    int len = sizeof(arr1) / sizeof(arr1[0]);     //为什么可以用  /  万一有余数呢？

    printf("%d\n", len);

    return 0;

}