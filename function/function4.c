/*

练习 4 要求：

写一个函数 getFactorial，接收一个整数 n，返回 n 的阶乘。（用 for 循环）

在 main 里输入 n，调用并输出结果。

*/

#include <stdio.h>

int getFactorial(int n){

    int result = 1;

    for(n; n>=1;n--){

        result *=n;

    }

    return result;

}

int main(void){

    int userInputNum;

    scanf("%d", &userInputNum);

    printf("%d", getFactorial(userInputNum));

    return 0;

}