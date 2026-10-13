/*

继续练习 7：

输入一个整数（1~12）

用 switch 输出对应的月份天数

1、3、5、7、8、10、12 是 31 天

4、6、9、11 是 30 天

2 月输出 28 或 29 天

其他数字输出 无效月份

提示：可以用贯穿让多个 case 共用一段代码

*/

#include <stdio.h>

int main(void){

    int userInputMonth;

    printf("请输入一个月份:");
    scanf("%d", &userInputMonth);

    switch (userInputMonth){

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("该月的天数为31天\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("该月的天数为30天\n");
            break;
        case 2:
            printf("该月天数为28天或29天\n");
            break;
        default:
            printf("Invalid Month");
            break;

    }

    return 0;

}

/*

运行结果:
请输入一个月份:4                                                                                                                                                   
该月的天数为30天

*/