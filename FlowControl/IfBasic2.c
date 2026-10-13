/*

练习 2 要求：

输入一个整数

判断奇偶

输出 偶数 或 奇数

用 if / else

*/

#include <stdio.h>

int main (void){

    int userInputNum;

    printf("请输入一个整数:");
    scanf("%d", &userInputNum);

    if(userInputNum % 2 == 0){

        printf("偶数\n");

    }
    else{

        printf("奇数\n");

    }

    return 0;
    

}


/*

运行结果:
请输入一个整数:6                                                                                                                                                   
偶数  

*/