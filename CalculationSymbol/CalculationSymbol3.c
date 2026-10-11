/*

练习 3 要求：

输入一个整数

输出它的个位数、十位数、百位数

提示：用 % 和 /

例如输入 123，输出：

text
个位：3
十位：2
百位：1

*/

#include <stdio.h>

int main(void){

    int num;
    int unitsDigit;
    int tensDigit;
    int tensDigitWay2;
    int hundredsDigit;
    
    printf("请输入一个三位整数:");
    scanf("%d", &num);

    unitsDigit = num % 10;
    //第一遍的错误写法  tensDigit = num % 100 - unitsDigit;
    //正确写法如下
    tensDigit  = ((num % 100) / 10);
    tensDigitWay2 = (((num % 100) - unitsDigit) / 10);
    hundredsDigit = num / 100;

    printf("这个数的个位数是:%d\n", unitsDigit);
    printf("这个数的十位数是:%d\n", tensDigit);
    printf("这个数的十位数第二种方法的运算结果是:%d\n", tensDigitWay2);
    printf("这个数的百位数是:%d\n", hundredsDigit);

    return 0;

}

/*

运行结果:
请输入一个三位整数:123                                                                                                                                                                                                                                                                                      
这个数的个位数是:3                                                                                                                                                                                                                                                                                          
这个数的十位数是:2                                                                                                                                                                                                                                                                                          
这个数的十位数第二种方法的运算结果是:2                                                                                                                                                                                                                                                                      
这个数的百位数是:1 

*/