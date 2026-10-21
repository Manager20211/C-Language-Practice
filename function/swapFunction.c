/*

练习 2 要求：
写一个函数 swap（尝试交换两个整数）。
在函数里打印交换后的结果。
在 main 里调用 swap 后，打印两个变量的值，观察有没有交换成功。

*/

#include <stdio.h>

void swap(int a, int b){

    int bridge;

    bridge = a;

    a = b;

    b = bridge;

    printf("%d\n", a);
    printf("%d\n", b);


}

int main(void){

    int num1 = 1;
    int num2 = 2;

    swap(num1,num2);

    return 0;

}

/*

运行结果:

2                                                                                                                                                                  
1 

*/