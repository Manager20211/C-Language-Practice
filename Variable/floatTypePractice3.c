/*

练习 3 要求：

double d = 3.14159265358979;

分别用 %.2f、%.5f、%.10f、%f 输出

观察区别

*/

#include <stdio.h>
int main(void){

    double d = 3.14159265358979;

    printf("%.2f\n", d);
    printf("%.5f\n", d);
    printf("%.10f\n", d);
    printf("%f\n", d);

    return 0;

}

/*

运行结果：
3.14                                                                                                                                                                      
3.14159                                                                                                                                                                   
3.1415926536                                                                                                                                                              
3.141593

*/