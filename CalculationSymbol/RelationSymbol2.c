/*

练习 2 要求：

输入一个整数

判断它是否在 10 到 20 之间（包含 10 和 20）

输出 在范围内 或 不在范围内

提示：用 &&

*/

#include <stdio.h>

int main (void){

    int num;

    printf("请输入一个整数:");
    scanf("%d", &num);

    if(num >= 10 && num <= 20){

        printf("在范围内");

    }
    else{

        printf("不在范围内");

    }

    return 0;

}

/*

运行结果:
请输入一个整数:15                                                                                                                                                                                                                                                                                           
在范围内

*/