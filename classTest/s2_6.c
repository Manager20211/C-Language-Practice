#include <stdio.h>

int main(void){

    double rate;

    int n;

    double capital;
    double deposit = 0;

    printf("请输入年利率:");
    scanf("%lf", &rate);
    printf("请输入存款期：");
    scanf("%d", &n);
    printf("请输入本金:");
    scanf("%lf", &capital);

    deposit = capital + n*capital*(rate / 100);

    printf("%f", deposit);

    return 0;

}

/*

运行结果:
请输入年利率:2.25
请输入存款期：5
请输入本金:100
111.250000

*/