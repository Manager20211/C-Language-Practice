#include <stdio.h>

int main(void){

    float f,p,w,d;
    int a,s;
    printf("请输入运费单价p:");
    scanf("%f", &p);
    printf("请输入重量w:");
    scanf("%f", &w);
    printf("请输入距离s:");
    scanf("%d", &s);
    a = s/250;
    switch (a){

        case 0:
            d = 0;
            break;
        case 1:
            d = 2;
            break;
        case 2:
        case 3:
            d = 5;
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            d = 8;
            break;
        case 8:
        case 9:
        case 10:
        case 11:
            d = 10;
            break;
        default:
            d = 15;
            break;

    }

    f= p*w*s*(1-d/100.0);
    printf("总运费为:%f\n", f);

    return 0;

}