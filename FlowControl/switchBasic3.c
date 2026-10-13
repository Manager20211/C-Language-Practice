/*

练习 3 要求：

输入两个整数和一个运算符字符（+、-、*、/）

用 switch 实现简单计算器

输出计算结果

除法要处理除数为 0 的情况

提示：switch 表达式可以是 char

*/

#include <stdio.h>

int main(void){

    int firstNum;
    int secondNum;

    char symbol;

    printf("请输入第一个数字:");
    scanf("%d", &firstNum);

    printf("请输入第二个数字:");
    scanf("%d", &secondNum);

    printf("请输入一个运算符:");
    scanf(" %c", &symbol);  //第一遍没加空格踩坑喽，读到空符号直接显示Invalid Input了

    if(symbol == '/' && secondNum == 0){

        printf("除数不能为0,程序结束\n");

    }
    else{

        switch (symbol){

            case '+':
                printf("第一第二两个数相加的结果是:%d\n", firstNum + secondNum);
                break;
            case '-':
                printf("第一第二两个数相减的结果是:%d\n", firstNum - secondNum);
                break;
            case '*':
                printf("第一第二两个数相乘的结果是:%d\n", firstNum * secondNum);
                break;
            case '/':
                printf("第一第二两个数相除的结果是:%f\n", (double)firstNum / (double)secondNum);
                break;
            default:
                printf("Invalid Input\n");
                break;

        }

    }

    return 0;

}

/*

运行结果:

请输入第一个数字:1                                                                                                                                                 
请输入第二个数字:1                                                                                                                                                 
请输入一个运算符:+                                                                                                                                                 
第一第二两个数相加的结果是:2 


*/