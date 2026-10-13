/*

练习 1
写一个程序：

int a = 10;

int b = 3;

输出 a / b

输出 (double)a / b

输出 a / (double)b

输出 (double)(a / b)

用注释解释每个结果

*/

#include <stdio.h>

int main(void){

    int a = 10;
    int b = 3;

    printf("a / b的结果是%d\n", a/b);  //3
    printf("(double)a / b 的结果是%f\n", (double) a / b);  //3.33333
    printf("a / (double)b的结果是%f\n", a / (double)b);  //3.3333
    printf("(double)(a/b)的结果是%f\n", (double)(a/b));  //3.0

    return 0;

}