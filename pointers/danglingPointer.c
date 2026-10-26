/*

独立练习任务：验证悬空指针
文件夹：pointersDeep
文件：ex2DanglingPointer.c

要求你自己写出下面的逻辑：

写一个函数 int* getAddress()，在函数内部定义一个局部变量 int x = 50;，然后 return &x;。

在 main 里，调用这个函数：int *p = getAddress();

在 main 里，尝试打印 *p 的值。

编译运行。

思考题（写在注释里）：
为什么不能返回局部变量的地址？（提示：局部变量存在哪个内存区？函数结束后它还在吗？）

*/

#include <stdio.h>

int* getAddress(void){

    int x = 50;
    return &x;

}

int main(void){

    int *p = getAddress();

    printf("%p\n", p);

    return 0;

}

/*

运行结果
0000000000000000  

*/