/*

练习 4 要求：

输入一个整数

判断它是不是偶数

输出 偶数 或 奇数

提示：用 n % 2 == 0

*/

#include <stdio.h>

int main (void){

    int num;

    printf("请输入一个整数:");
    scanf("%d", &num);

    if(num % 2 == 0){

        printf("这个数是偶数\n");

    }
    else{

        printf("这个数是奇数\n");

    }

    return 0;

}

/*

运行结果:
请输入一个整数:123                                                                                                                                                                                                                                                                                          
这个数是奇数

*/