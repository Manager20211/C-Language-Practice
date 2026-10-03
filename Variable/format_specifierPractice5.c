/*

练习 5 要求：

int a = 1;

unsigned int b = 2;

long c = 3;

long long d = 4;

size_t e = 5;

全部用正确的格式符输出，每个一行。

*/

#include <stdio.h>

int main(void){

    int a = 1;
    unsigned int b = 2;
    long c = 3;
    long long d = 4;
    size_t e = 5;

    printf("a = %d\n", a);
    printf("b = %u\n", b);
    printf("c = %ld\n", c);
    printf("d = %lld\n", d);
    printf("e = %zu\n", e);

    return 0;


}