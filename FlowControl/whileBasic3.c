/*

练习 3 要求：

输入一个正整数 n

用 while 输出 n 到 1，然后输出 发射!

例如输入 5，输出：

text
5
4
3
2
1
发射!

*/

#include <stdio.h>

int main(void){

    int userInputNum;

    printf("请输入一个整数:");
    scanf("%d", &userInputNum);

    while (userInputNum >= 1){

        printf("%d\n", userInputNum);
        userInputNum--;

    }

    printf("发射!\n");

    return 0;

}

/*

运行结果
输入一个整数:10
10
9
8
7
6                                                                                                                                                                  
5                                                                                                                                                                  
4                                                                                                                                                                  
3                                                                                                                                                                  
2                                                                                                                                                                  
1                                                                                                                                                                  
发射!

*/