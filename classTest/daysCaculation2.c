/*

author:pr0xy
date:2026/11/4
version:2.0

*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    int year;
    int month;
    int date;
    int h = 0;

    printf("请输入年份，月份，日期:\n");
    scanf("%d%d%d", &year,&month,&date);

    /*
    
    检查年份
    
    */
    if(year < 1600){

        printf("年份小于1600，星期几未知\n");
        exit(0);

    }

    /*
    
    检查月份
    
    */

    if(!(month>=1 && month <=12)){

        printf("输入的月份有误\n");
        exit(0);

    }

    /*
    
    检查日期
    
    */

    switch(month){
        case 1:
            if(!(date>=1 && date <= 31)){

                printf("输入的日期有误");
                exit(0);

            }
            break;
        case 2:
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){

                if(!(date>=1 && date <=29)){

                    printf("输入的日期有误");
                    exit(0);
                    
                }

            }
            else{

                if(!(date>=1 && date <= 28)){

                    printf("输入的日期有误");
                    exit(0);

                }

            }
            break;
        case 3:
            if(!(date>=1 && date <= 31)){

                printf("输入的日期有误");
                exit(0);

            }
            break;
        case 4:
            if(!(date>=1 && date <= 30)){

                printf("输入的日期有误");
                exit(0);

            }
            break;
        case 5:
            if(!(date>=1 && date <= 31)){

                printf("输入的日期有误");
                exit(0);

            }
            break;
        case 6:
            if(!(date>=1 && date <= 30)){

                printf("输入的日期有误");
                exit(0);

            }
            break;
        case 7:
            if(!(date>=1 && date <= 31)){

                printf("输入的日期有误");
                exit(0);

            }
            break;
        case 8:
            if(!(date>=1 && date <= 31)){

                printf("输入的日期有误");
                exit(0);

            }
            break;
        case 9:
            if(!(date>=1 && date <= 30)){

                printf("输入的日期有误");
                exit(0);

            }
            break;
        case 10:
            if(!(date>=1 && date <= 31)){

                printf("输入的日期有误");
                exit(0);

            }
            break;
        case 11:
            if(!(date>=1 && date <= 30)){

                printf("输入的日期有误");
                exit(0);

            }
            break;
        case 12:
            if(!(date>=1 && date <= 31)){

                printf("输入的日期有误");
                exit(0);

            }
            break;
    
        }

    if(month == 1 || month == 2){

        month +=12;
        year -= 1;

    }


    /*
    
    floor()的返回值是double，但是根本没必要啊。什么鬼。
    
    */
    h = (int)(date + floor(26*(month+1) / 10) + year + floor(year / 4) + 6*floor(year / 100 )+floor(year / 400)) % 7;


    if(month == 1 || month == 2){

        month -= 12;
        year += 1;

    }

    printf("%d年%d月%d日是星期", year,month,date);

    switch(h){

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

    return 0;

}