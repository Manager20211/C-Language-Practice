/*

练习 5 要求：

输入一个正整数 n。

用 for 循环计算 n 的阶乘（n! = 1 * 2 * 3 * ... * n）。

输出结果。

提示：累乘的变量初始值必须是 1，不能是 0。（因为 0 乘任何数都是 0）

*/

#include <stdio.h>

int main(void){

    int n;

    scanf("%d", &n);

    int nFac = 1;

    for(int i = 1; i <= n ; i++){

        nFac *= i;

    }

    printf("%d\n", nFac);

    return 0;

}
/*

运行结果:
4                                                                                                                                                                                                                                                                                                    
24   

*/