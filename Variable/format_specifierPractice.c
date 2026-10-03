/*
练习 1
写一个程序，声明并初始化下面这些变量，然后用正确的格式符输出它们，每个一行：

int a = 10;

unsigned int b = 20;

long c = 30;

unsigned long d = 40;

long long e = 50;

unsigned long long f = 60;

输出格式示例：

text
a = 10
b = 20
c = 30
...

*/


#include <stdio.h>

int main(void){

    int a = 10;
    unsigned int b = 20;
    long c = 30;
    unsigned long d = 40;
    long long e = 50;
    unsigned long long f = 60;

    printf("a = %d\n", a);
    printf("b = %u\n", b);
    printf("c = %ld\n", c);
    printf("d = %lu\n", d);
    printf("e = %lld\n", e);
    printf("f = %llu\n", f);
    
    return 0;

}