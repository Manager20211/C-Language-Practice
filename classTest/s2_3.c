#include <stdio.h>

int main(void){

    int n;
    int a,b;
    int s;
    printf("请输入一个两位整数:");
    scanf("%d", &n);
    a = n%10;
    b = n/10;
    s = a+b;
    printf("%d", s);

    return 0;

}

/*

运行结果:
请输入一个两位整数:45
9

*/