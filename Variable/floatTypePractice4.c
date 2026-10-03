/*

练习 4 要求：

double a = 0.1;

double b = 0.2;

double c = a + b;

用 %.20f 输出 c

判断 c == 0.3，输出“相等”或“不相等”

*/

#include <stdio.h>

int main(void){

    double a = 0.1;
    double b = 0.2;
    double c = a+b;

    printf("%.20f\n",c);

    if (c == 0.3){

        printf("相等");

    }
    else{

        printf("不相等");

    }

    return 0;

}

/*

运行结果
0.30000000000000004441                                                                                                                                                    
不相等  

*/