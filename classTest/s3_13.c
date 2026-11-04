#include <stdio.h>

int main(void){

    int year,month,days;
    printf("请输入年份:");
    scanf("%d", &year);
    printf("请输入月份:");
    scanf("%d", &month);
    switch(month){

        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days =30;
            break;
        case 2:
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){

                days = 29;

            }
            else{

                days = 28;

            }
            break;
        default:
            printf("数据错误!\n");
            break;

    }

    printf("%d年%d月有%d天!\n",year,month,days);

    return 0;

}