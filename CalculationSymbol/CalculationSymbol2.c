/*

练习 2 要求：

int a = 17;

int b = 5;

输出 (double)a / b

输出 a / (double)b

输出 (double)(a / b)

观察三者区别，并解释

*/

#include <stdio.h>

int main (void){

    int a = 17;
    int b = 5;

    printf("(double)a/b=%f\n", (double)a/b);
    printf("a/(double)b=%f\n", a/(double)b);
    printf("(double)(a/b)=%f\n", (double)(a/b));

    return 0;

}

/*

编译结果：
(double)a/b=3.400000                                                                                                                                                                                                                                                                                        
a/(double)b=3.400000                                                                                                                                                                                                                                                                                        
(double)(a/b)=3.000000

*/

/*

解释：前面两个都是先将一个变量(a或者b)变成浮点数后进行运算的。故结果也为浮点数运算的结果
而最后一个是先让a b 两个整型的变量先整除，再将整除结果转化为浮点数

*/