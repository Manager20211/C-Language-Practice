/*

独立练习任务 (ex2DoublePointer.c)
要求自己写出下面的逻辑（不要抄模板）：

声明 int a = 100;

声明一级指针 int *p = &a;

声明二级指针 int **pp = &p;

打印三个东西：

a 的值

通过 p 打印 a 的值（用 *p）

通过 pp 打印 a 的值（用 **pp）

重点操作：通过 pp 去修改 a 的值。

写 **pp = 200; （意思是：顺着套娃找到最后的变量，改成 200）。

最后打印 a 的值，看看是不是变成了 200。

*/

#include <stdio.h>

int main(void){

    int a = 100;
    int *p = &a;
    int **pp = &p;

    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", **pp);

    **pp = 200;

    printf("%d\n", a);

    return 0;

}

/*

运行结果：

100                                                                                                                                                                
100                                                                                                                                                                
100                                                                                                                                                                
200 

*/