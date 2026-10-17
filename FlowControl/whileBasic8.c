/*

练习 8 要求：

输入一个整数

用 while 计算它有多少位

例如输入 12345，输出 5

提示：每次除以 10，直到变成 0

*/

#include <stdio.h>

int main(void){

    int digitCounter = 0;
    int userInputNum;
    int i;

    scanf("%d", &userInputNum);

    i = userInputNum;

    while(i != 0){

        digitCounter++;
        i /= 10;

    }

    printf("%d\n", digitCounter);

    return 0;

}

/*

运行结果
12345                                                                                                                                                              
5  

*/