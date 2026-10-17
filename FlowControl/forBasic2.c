/*

练习 2
用 for 循环计算 1 到 100 的和，并输出结果。
（还记得累加变量初始化为几吗？）

*/

#include <stdio.h>

int main(void){

    int sum = 0;

    for(int i = 1; i<=100; i++){

        sum += i;

    }

    printf("%d\n", sum);

    return 0;

}

/*

运行结果:
5050 

*/