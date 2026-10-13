/*

练习 1
写一个程序：

输入一个整数（1~7）

用 switch 输出对应的星期几

1 是周一，7 是周日

其他数字输出 无效输入

*/

#include <stdio.h>

int main (void){

    int userInputNum;

    printf("请输入一个1~7的整数:");
    scanf("%d", &userInputNum);

    switch (userInputNum){

        case 1:
            printf("周一\n");
            break;
        case 2:
            printf("周二\n");
            break;
        case 3:
            printf("周三\n");
            break;
        case 4:
            printf("周四\n");
            break;
        case 5:
            printf("周五\n");
            break;
        case 6:
            printf("周六\n");
            break;
        case 7:
            printf("周日\n");
            break;
        default:
            printf("invalid input\n");
            break;
    }

    return 0;

}

/*

运行结果
请输入一个1~7的整数:5                                                                                                                                               
周五

*/