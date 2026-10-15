/*

练习 5 要求：

输入一个正整数

用 while 输出它的每一位数字之和

例如输入 123，输出 6（1+2+3）

提示：用 % 10 取个位，用 / 10 去掉个位

*/


/* shitcode
#include <stdio.h>

int main(void){
    
    int userInputNum;
    int unitsDigit;
    int tensDigit;
    int sum = 0;

    printf("请输入一个整数:");

    scanf("%d", &userInputNum);

    unitsDigit = userInputNum % 10;
    tensDigit = userInputNum / 10;

    while (unitsDigit != 0 || tensDigit != 0){          // ||是用于逻辑判断的 |是用于操作二进制的

        sum += unitsDigit;
        unitsDigit = tensDigit % 10;
        tensDigit /= 10;

    }

    printf("各个位上的数字总和为:%d\n", sum);

    return 0;

}

*/

#include <stdio.h>

int main(void){

    int userInputNum;
    int sum = 0;
    int i;

    scanf("%d", &userInputNum);

    i = userInputNum;

    while ( i != 0){

        sum += i % 10;
        i /= 10;

    }

    printf("各个位数总和是:%d\n", sum);

    return 0;

}


/*

运行结果为:

请输入一个整数:123                                                                                                                                                 
各个位上的数字总和为:6 

*/