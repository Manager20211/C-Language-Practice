#include <stdio.h>
#include <math.h>

int main(void){

    int x,y;
    double s;
    printf("请输入第一个整数x=");
    scanf("%d", &x);
    printf("请输入第二个整数y=");
    scanf("%d", &y);
    s = pow(x,y);
    printf("%f", s);

    return 0;

}

/*

运行结果:
请输入第一个整数x=2
请输入第二个整数y=4
16.000000

*/