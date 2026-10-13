/*

练习 5 要求：

输入一个年份

判断是否闰年

用 if / else

*/

#include <stdio.h>

int main(void){

    int year;

    printf("请输入一个年份:");
    scanf("%d", &year);

    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){

        printf("闰年\n");

    }
    else{

        printf("不是闰年\n");

    }

    return 0;

}

/*

运行结果
请输入一个年份:2024                                                                                                                                                
闰年 

*/