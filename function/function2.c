/*

练习 2 要求：

写一个函数 getMax，接收两个整数，返回其中较大的一个。

在 main 里输入两个数，调用函数求出最大值并输出。

*/

#include <stdio.h>

int getMax(int num1,int num2){

    if(num1>=num2){

        return num1;

    }
    else{

        return num2;

    }

}

int main(void){

    int userInputNum1;
    int userInputNum2;

    scanf("%d", &userInputNum1);
    scanf("%d", &userInputNum2);

    printf("%d\n", getMax(userInputNum1,userInputNum2));

    return 0;

}