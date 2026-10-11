/*

练习 3 要求：

输入一个年份

判断是不是闰年

闰年条件：能被 4 整除但不能被 100 整除，或者能被 400 整除

输出 闰年 或 不是闰年

*/

#include <stdio.h>

int main(void){

    int year;

    printf("请输入一个年份:");
    scanf("%d", &year);

    if( ((year % 4 == 0) && year % 100 != 0) || (year % 400 == 0)){

        printf("这一年是闰年\n");

    }
    else{

        printf("这一年不是闰年\n");

    }

    return 0;

}

/*

运行结果:
请输入一个年份:2036                                                                                                                                                                                                                                                                                         
这一年是闰年

*/