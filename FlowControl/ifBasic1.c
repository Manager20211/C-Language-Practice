/*

练习 1
写一个程序：

输入一个整数

判断它是否大于 0

输出 正数 或 非正数

*/

#include <stdio.h>

int main(void){

    int userInputNum;

    printf("请输入一个整数:");
    scanf("%d", &userInputNum);

    if(userInputNum > 0){

        printf("正数\n");

    }
    else{

        printf("非正数\n");

    }


    return 0;

}

/*

运行结果；
请输入一个整数:54                                                                                                                                                  
正数 

*/