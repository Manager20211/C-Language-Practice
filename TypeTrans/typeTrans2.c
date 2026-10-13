/*

练习 2 要求：

double d = 3.99;

int i = d;

输出 d 和 i

观察 i 是多少，说明浮点转整数的规则

*/

#include <stdio.h>

int main(void){

    double d = 3.99;
    int i = d;

    printf("d为%f\n", d);
    printf("i为%d\n", i);  //我猜是3，因为浮点转整数是直接截而不是四舍五入

    return 0;

}

/*

实际运行结果:
d为3.990000                                                                                                                                                        
i为3

*/