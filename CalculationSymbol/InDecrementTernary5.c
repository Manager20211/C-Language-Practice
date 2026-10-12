/*

练习 5 要求：

输入一个整数

用三目运算符求绝对值

输出结果

*/

#include <stdio.h>

int main(void){

    int num;
    int absNum;

    printf("请输入一个整数:");
    scanf("%d", &num);

    absNum = (num >= 0) ? num : -num;

    printf("该整数的绝对值为:%d", absNum);

    return 0;

}

/*

运行结果:
请输入一个整数:-1                                                                                                                                                                                                                                                                                    
该整数的绝对值为:1   

*/