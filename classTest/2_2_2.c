#include <stdio.h>
#include <math.h>

int main(void){

    double a;
    double b;
    double c;

    printf("请输入三角形三边长:");
    scanf("%lf%lf%lf", &a,&b,&c);

    double s = (a+b+c) / 2;

    double area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("三角形的三边长分别为:\n");
    printf("a=%.2f,b=%.2f,c=%.2f\n", a,b,c);
    printf("半周长s=%.2f,面积area=%.2f\n", s,area);

    return 0;

}
/*

运行结果:
请输入三角形三边长:3 4 5
三角形的三边长分别为:
a=3.00,b=4.00,c=5.00
半周长s=6.00,面积area=6.00

*/