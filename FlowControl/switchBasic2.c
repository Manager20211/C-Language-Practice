/*

写一个程序：

输入一个整数（1~4）

用 switch 输出对应季节：

1：春

2：夏

3：秋

4：冬

其他数字输出 无效输入

*/

#include <stdio.h>

int main(void){

    int userInputNum;

    printf("请输入一个1~4的整数:");
    scanf("%d", &userInputNum);

    switch (userInputNum){

        case 1:
            printf("春\n");
            break;
        case 2:
            printf("夏\n");
            break;
        case 3:
            printf("秋\n");
            break;
        case 4:
            printf("冬\n");
            break;
        default:
            printf("invalid input\n");
            break;

    }

    return 0;

}

/*

运行结果:
请输入一个1~4的整数:4                                                                                                                                              
冬 

*/