/*

练习 2
写一个程序：

用 do while 验证“至少执行一次”。

声明 int i = 10;。

循环条件写 while (i < 5)。

在循环体里输出 我执行了一次 并让 i++。

运行看看输出了几次，体会 do while 的特性。

*/

#include <stdio.h>

int main(void){

    int i = 10;

    do{

        printf("我执行了一次\n");

        i++;

    } while(i < 5);

    return 0;

}

/*

运行结果:
我执行了一次

*/