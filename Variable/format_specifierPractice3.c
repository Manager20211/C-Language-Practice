/*

继续练习 3：

要求：

声明一个 size_t 变量

把 sizeof(double) 赋给它

输出 sizeof(double) = 8

*/

#include <stdio.h>

int main (void){

    size_t sizeOfDouble = sizeof(double);

    printf("sizeof(double) = %zu\n", sizeOfDouble);

    return 0;

}