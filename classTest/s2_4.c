#include <stdio.h>

int main(void){

    int a,b;
    double s;

    printf("请输入第一个整数a=");
    scanf("%d", &a);
    printf("请输入第二个整数b=");
    scanf("%d", &b);
    s = (double)a/(double)b;
    printf("%f\n", s);

    return 0;

}

/*

运行结果:
请输入第一个整数a=1
请输入第二个整数b=2
0.500000

*/