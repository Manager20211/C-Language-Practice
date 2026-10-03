#include <stdio.h>

int main(void)
{
    int a;
    int b = a + 1;    //这道题a没有初始化，就赋值b为a+1 能赋上，但是是垃圾值
    printf("%d\n", b);
    return 0;
}