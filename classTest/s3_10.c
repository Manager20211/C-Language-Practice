#include <stdio.h>

int main(void){

    int num;
    int a,b,c,d;
    int p = 0;
    printf("请输入一个整数(0-9999):");
    scanf("%d",&num);
    if(num > 999){

        p = 4;

    }else if(num > 99){

        p = 3;

    }else if(num > 9){

        p = 2;

    }
    else{

        p = 1;

    }

    printf("该数是一个%d位整数！\n",p);
    a = num % 1000;
    b = (num / 100) % 10;
    c = (num / 10) % 10;
    d = num % 10;

    printf("每位数字为:");
    switch (p){

        case 4:
            printf("%d,%d,%d,%d\n", a,b,c,d);
            printf("反序数是:");
            printf("%d%d%d%d\n", d,c,b,a);
            break;
        case 3:
            printf("%d,%d,%d\n", b,c,d);
            printf("反序数是:");
            printf("%d%d%d\n", d,c,b);
            break;
        case 2:
            printf("%d,%d\n", c,d);
            printf("反序数是:");
            printf("%d%d\n", d,c);
            break;
        case 1:
            printf("%d\n", d);
            printf("反序数是:");
            printf("%d\n", d);
            break;

    }

    return 0;

}