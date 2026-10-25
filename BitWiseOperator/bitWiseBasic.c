/*

练习 1 (ex1BitwiseBasic.c)
验证基础运算。
定义 int a = 12;（二进制 1100），int b = 10;（二进制 1010）。
分别打印 a & b、a | b、a ^ b。
（不用管 ~a 和负数，我们这次只玩正数）。
提示：用 %d 打印出来，在注释里写出它们对应的二进制结果，看看是不是符合上面的规则

*/

#include <stdio.h>

int main(void){

    int a = 12;
    int b = 10;

    printf("%d\n", a&b);  //预测1000 8
    printf("%d\n", a|b);  //预测1110 14
    printf("%d\n", a^b); //预测0110 6

    return 0;

}