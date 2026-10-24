/*

练习 1 (ex1PointerBasic.c)
要求：

定义一个普通变量 int a = 10;。

打印 a 的值。

打印 a 的地址（用 %p 和 &a）。

定义一个指针变量 int *p = &a;。

打印 p 的值（看看是不是和 a 的地址一样）。

通过指针修改 a 的值：*p = 50;。

再次打印 a 的值（看看是不是变成了 50）。

代码不长，自己敲一遍。跑通后发我！

*/

#include <stdio.h>

int main(void){

    int a = 10;

    printf("%d\n", a);
    printf("%p\n", &a);

    int *p = &a;

    printf("%p\n", p);
    printf("%d\n", *p);                        //指针打印，用%p p
                            //打印地址用p，打印数值用*p

    *p = 50;

    printf("%d\n", a);

    return 0;

}

/*

运行结果:
10                                                                                                                                                                                                                                                                                                   
00000000005FFE64                                                                                                                                                                                                                                                                                     
00000000005FFE64                                                                                                                                                                                                                                                                                     
50   

*/