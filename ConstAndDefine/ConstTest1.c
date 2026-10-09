/*

用 const 定义一个常量 PI = 3.14159，输入半径，输出圆面积。
尝试修改 PI，观察编译错误。

*/

#include <stdio.h>


int main(void){

    const double PI = 3.14159;
    //PI = 3.14;
    double r;
    double S;

    printf("请输入圆的半径:");
    scanf("%lf", &r);

    S=PI*r*r;

    printf("圆的面积是:%f\n", S);

    return 0;

}

/*

第一遍正常编译结果：
请输入圆的半径:10                                                                                             
圆的面积是:314.159000

*/

/*

尝试修改PI的结果
error: assignment of read-only variable 'PI'
   14 |     PI = 3.14;

*/