#include <stdio.h>

int main(void){

    int userInputNum;
    int hundredsDigit = 0;
    int tensDigit = 0;
    int unitsDigit = 0;
    int m = 0;

    printf("请输入一个三位整数:");

    scanf("%d",&userInputNum);

    if(userInputNum > 99 && userInputNum < 1000){

        hundredsDigit = userInputNum / 100;
        tensDigit = (userInputNum / 10) % 10;
        unitsDigit = userInputNum % 10;

        m = 100*unitsDigit + 10*tensDigit + hundredsDigit;

        if(userInputNum == m){

            printf("是回文数\n");

        }
        else{

            printf("不是回文数\n");

        }

    }else{

        printf("输入的整数不为三位数\n");

    }

    

    return 0;

}