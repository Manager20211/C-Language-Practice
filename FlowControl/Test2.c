/*

测试题 2：最大公约数 (考察 while 循环)
要求：
输入两个正整数 a 和 b，计算并输出它们的最大公约数。
提示：使用辗转相除法。
思路：a 除以 b 的余数记为 r。如果 r != 0，则 a = b，b = r，继续求余；直到 r == 0 时，此时的 b 就是最大公约数。

*/

#include <stdio.h>

int main(void){

    int a;
    int b;
    int r;

    printf("a:");
    scanf("%d", &a);

    printf("b:");
    scanf("%d", &b);

    r = a%b;

    while(r != 0){

        a = b;
        b = r;
        r = a%b;

    }

    printf("%d\n", b);

    return 0;

}