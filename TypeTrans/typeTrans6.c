/*

练习 6 要求：

double d = 3.14159;

int i = (int)d;

输出 d 和 i

说明强制转换的效果

这次注意格式符：

d 用 %f

i 用 %d

*/

#include <stdio.h>

int main (void){

    double d = 3.14159;
    int i = (int)d;

    printf("d为:%f\n", d);
    printf("i为:%d\n", i);

    return 0;

}

/*

d为:3.141590                                                                                                                                                       
i为:3

浮点强转整型，不四舍五入，直接截取整数部分

*/