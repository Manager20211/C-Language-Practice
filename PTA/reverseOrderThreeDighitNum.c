/*

7-3 逆序的三位数
分数 10
作者 翁恺
单位 浙江大学
程序每次读入一个正3位数，然后输出按位逆序的数字。注意：当输入的数字含有结尾的0时，输出不应带有前导的0。比如输入700，输出应该是7。

输入格式：
每个测试是一个3位的正整数。

输出格式：
输出按位逆序的数。

输入样例：
123
输出样例：
321
鸣谢安阳师范学院软件学院李康康同学补充数据！

*/

#include <stdio.h>

int main(void){

    int num;

    int unitDigit;
    int tensDigit;
    int hundredsDigit;

    printf("请输入一个三位数:");
    scanf("%d", &num);

    unitDigit = num % 10;
    tensDigit = (num % 100 - unitDigit) / 10;
    hundredsDigit = num / 100;

    if(unitDigit == 0){

        if(tensDigit == 0){

            printf("%d", hundredsDigit);

        }
        else{

            printf("%d%d", tensDigit,hundredsDigit);

        }
            

    }else{

        printf("%d%d%d", unitDigit,tensDigit,hundredsDigit);

    }

    return 0;


}