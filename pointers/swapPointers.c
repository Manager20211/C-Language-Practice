/*

练习 2 (ex2SwapPointers.c)
要求：
把上面的代码敲一遍，运行看看 x 和 y 是不是真的交换成功了。
运行成功后，请用你自己的话（写在注释里）解释一下：为什么这次传了地址，交换就成功了？

*/

#include <stdio.h>

void swap(int *pa, int *pb){

    *pa = *pa+*pb;
    *pb = *pa-*pb;
    *pa = *pa-*pb;

}

int main(void){

    int num1 = 1;
    int num2 = 2;

    int *p1 = &num1;
    int *p2 = &num2;

    swap(p1, p2);

    printf("%d    %d", num1,num2);

    return 0;

}
/*

运行结果:

2    1  

我自己写的时候没看过你的算法，写完之后再看你的，发现我的算法比你更精简

*/