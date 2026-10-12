/*

写一个程序：

输入两个整数

用三目运算符求最大值

输出最大值

*/

#include <stdio.h>

int main(void){

    int firstNum;
    int secondNum;
    int maxNum;

    printf("请输入第一个整数:");
    scanf("%d", &firstNum);

    printf("请输入第二个整数:");
    scanf("%d", &secondNum);

    maxNum = (firstNum > secondNum) ? firstNum : secondNum;

    printf("你刚刚输入的两个整数中最大的是:%d", maxNum);

    return 0;

}

/*

运行结果:
请输入第一个整数:3                                                                                                                                                                                                                                                                                          
请输入第二个整数:8                                                                                                                                                                                                                                                                                          
你刚刚输入的两个整数中最大的是:8 


*/