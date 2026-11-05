/*
author: pr0xy
date: 2026/11/4
*/

#include <stdio.h>

int main(void)
{
    int year;
    int month;
    int date;
    int y;
    int m;
    int maxday;
    int h = 0;

    printf("请输入年份，月份，日期:\n");
    scanf("%d%d%d", &year, &month, &date);

    if (year < 1600) {
        printf("年份小于1600，星期几未知\n");
    }
    else if (month < 1 || month > 12) {
        printf("输入的月份有误\n");
    }
    else {

        /* 求出本月最大天数 */
        switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                maxday = 31;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                maxday = 30;
                break;
            case 2:
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                    maxday = 29;
                else
                    maxday = 28;
                break;
        }

        if (date < 1 || date > maxday) {

            printf("输入的日期有误\n");
            
        }
        else {

            y = year;
            m = month;
            if (m == 1 || m == 2) {
                m += 12;
                y -= 1;
            }

            /*
    
            floor()的返回值是double，但是根本没必要啊。什么鬼。
    
            */
            h = (int)(date + (26*(month+1)) / 10) + year + (year / 4) + 6*(year / 100 )+(year / 400) % 7;

            printf("%d年%d月%d日是星期", year, month, date);

            switch (h) {
                case 0: 
                    printf("六\n"); 
                break;
                case 1: 
                    printf("天\n"); 
                    break;
                case 2: 
                    printf("一\n"); 
                    break;
                case 3: 
                    printf("二\n"); 
                    break;
                case 4: 
                    printf("三\n"); 
                    break;
                case 5:     
                    printf("四\n"); 
                    break;
                case 6: 
                    printf("五\n"); 
                    break;
            }
        }
    }

    return 0;
}