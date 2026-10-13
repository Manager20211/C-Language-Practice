/*

练习 7：

c
#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 3;
    double c = 10 / 3;
    double d = (double)10 / 3;

    printf("c = %f\n", c);
    printf("d = %f\n", d);

    return 0;
}

先判断，再编译运行。
解释两者为什么不同。

*/

#include <stdio.h>

int main(void){

    int a = 10;
    int b =3;
    double c = a / b;  //  3 -> 3.0000
    double d = (double) a / b;  // 3.3333333

    printf("c为%f\n", c);
    printf("d为%f\n", d);

    return 0;

}