/*

练习 2 要求：

float f = 3.14f;

double d = 3.14;

分别用 %f 输出

观察默认输出几位小数

*/

#include <stdio.h>

int main (void){

    float f = 3.14f;
    double d = 3.14;
    
    printf("float test:%f\n", f);
    printf("double test:%f\n", d);

    printf("float test:%.20f\n", f);
    printf("double test:%.20f\n", d);

    return 0;

}

/*

输出结果：float test:3.140000                                                                                                                                                       
double test:3.140000 
观察：这不是一样吗？

float test:3.14000010490417480469                                                                                                                                         
double test:3.14000000000000012434 

double更精确

*/