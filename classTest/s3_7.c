#include <stdio.h>

int main(void){

    int Num1,Num2,Num3;
    int max = 0;

    scanf("%d%d%d",&Num1,&Num2,&Num3);

    max = Num1;

    if(max <= Num2){

        max = Num2;

    }else if(max <= Num3){

        max = Num3;

    }

    printf("最大值为%d", max);

    return 0;
    

}