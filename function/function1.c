/*

练习 1
写一个函数 printLine，没有返回值（void），没有参数（void）。
功能：在屏幕上打印 20 个 * 并换行。
在 main 里连续调用它 3 次。

*/

#include <stdio.h>

void printLine(void){

    for(int i = 1; i<=20 ; i++){

        printf("*");

    }

    printf("\n");

}

int main(void){

    printLine();
    printLine();
    printLine();

    return 0;

}