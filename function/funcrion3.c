/*

练习 3 要求：

写一个函数 isEven，接收一个整数，如果是偶数返回 1，如果是奇数返回 0。

在 main 里输入一个数，调用函数判断并输出 偶数 或 奇数。

*/

#include <stdio.h>

int isEven(int num){

    if(num % 2 == 0){

        return 1;

    }
    else{

        return 0;

    }

}

int main(void){

    int userInputNum;

    scanf("%d", &userInputNum);

    if(isEven(userInputNum)){

        printf("偶数\n");

    }
    else{

        printf("奇数");

    }

    return 0;

}