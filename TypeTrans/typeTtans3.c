/*

练习 3 要求：

int a = 5;

double b = a;

输出 a 和 b

观察 b 是多少

这次记得格式符要对：

a 用 %d

b 用 %f

*/

#include <stdio.h>

int main(void){

    int a = 5;
    double b = a;

    printf("a为%d\n", a);
    printf("b为%f\n", b);

    return 0;

}

/*

编译结果
a为5                                                                                                                                                               
b为5.000000 

*/