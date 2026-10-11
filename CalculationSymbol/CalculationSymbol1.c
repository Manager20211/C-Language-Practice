/*

练习 1
写一个程序：

int a = 17;

int b = 5;

输出 a + b、a - b、a * b、a / b、a % b

每行一个，标注清楚

*/

#include <stdio.h>

int main (void){

    int a = 17;
    int b = 5;

    printf("a+b=%d\n", a+b);
    printf("a-b=%d\n", a-b);
    printf("a*b=%d\n", a*b);
    printf("a/b=%d\n", a/b);
    printf("a%%b=%d\n", a%b);

    return 0;

}

/*

编译结果：
a+b=22                                                                                                                                                                                                                                                                                                      
a-b=12                                                                                                                                                                                                                                                                                                      
a*b=85                                                                                                                                                                                                                                                                                                      
a/b=3                                                                                                                                                                                                                                                                                                       
a%b=2

*/