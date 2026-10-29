/*

author:pr0xy(kzh)
date:2026.10.29

*/

#include <stdio.h>
#include "menu.h"

void printMenu(void){

    //绘制上边界

    for(int i = 1; i<=30; i++){

        printf("*");

    }

    for(int j = 1; j<=3;j++ ){

        printf("\n");

    }
    
    //功能界面打印

    printf("1.添加学生(Add)\n");
    printf("2.查看全部学生 (List)\n");
    printf("3.查找学生 (Search)\n");
    printf("4.删除学生 (Delete)\n");
    printf("5.保存到文件 (Save)\n");
    printf("6.从文件加载 (Load)\n");
    printf("7.退出系统 (Exit)\n");

    //功能界面结束

    for(int j = 1; j<=3;j++ ){

        printf("\n");

    }

    //绘制下边界

    for(int i = 1; i<=30; i++){

        printf("*");

    }

}