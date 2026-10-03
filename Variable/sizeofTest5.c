/*
原题:练习 5
下面这行代码有什么问题？

c
printf("%d\n", sizeof(int));
先自己判断，再编译运行看结果。

我的猜想:sizeof返回的值的类型是size_t。而%d用于接收int类型的数据

*/
#include <stdio.h>

int main(){

    printf("%d\n", sizeof (int)); //错误写法
    printf("%zu\n", sizeof (int)); //正确写法
    return 0;

}