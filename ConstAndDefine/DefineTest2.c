/*

用 #define 定义 PI 3.14159，重做练习 1。

*/

#include <stdio.h>
#define PI 3.14159

int main (void){

    double r;
    double s;

    printf("请输入圆的半径:");
    scanf("%lf", &r);

    s = PI*r*r;

    printf("圆的面积是:%f\n", s);

    return 0;

}

/*

编译结果：
请输入圆的半径:10                                                                                             
圆的面积是:314.159000

*/