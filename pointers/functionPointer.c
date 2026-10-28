/*

独立练习任务 (ex3FunctionPointer.c)
要求自己写出下面的逻辑（拼装语法）：

在 main 外面（上面）写一个函数 int multiply(int x, int y)，返回 x * y。

在 main 里面：

声明一个函数指针 int (*fp)(int, int);

让 fp 指向 multiply 函数。（fp = multiply;）

利用函数指针去调用这个函数：int result = fp(3, 4);

打印 result，看看是不是 12。

*/

#include <stdio.h>

int multiply(int x , int y){

    return x*y;

}

int main(void){

    int (*fp)(int , int);

    fp = multiply;

    int result = fp(3,4);

    printf("%d\n", result);

    return 0;

}