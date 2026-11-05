
/*

author:pr0xy
date:2026/11/5

*/

#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

static void SetPos(int x, int y);

int main(void){
    
    /*
    int line = 1;  下面炫技写法用到的
    */
    char userInputChar = 0;

    system("cls");
    /*
    
    打印日期
    
    */

    time_t t;
    struct tm *lt;
    time (&t); 
    lt=localtime (&t);   
    SetPos(34,0);
    printf ("%d/%d/%d %d:%d:%d\n", lt->tm_year+1900, lt->tm_mon, lt->tm_mday,lt->tm_hour, lt->tm_min, lt->tm_sec); 

    /*
    
    打印表格
    
    */
    SetPos(8,1);
    /*
    最笨拙的写法如下
    */
    printf("* * * * * * * * * * * * *\n"); 
    /*
    炫技写法如下(连续输出都可以用for循环)
    */
    /*
    for(line;line<=13;line++){

        printf("*");
        printf(" ");

    }
    printf("\n");
    */
    /*适当的改变缩进可以让输出结果更加直观*/
    SetPos(8, 2);  printf("*         Menu          *");
    SetPos(8, 3);  printf("*      1. Input         *");
    SetPos(8, 4);  printf("*      2. Output        *");
    SetPos(8, 5);  printf("*      3. End           *");
    SetPos(8, 6);  printf("* * * * * * * * * * * * *");
    
    SetPos(8, 7);  printf("Enter Number=>");
    SetPos(8, 8);  printf("Ch=");

    SetPos(23,7);

    /*
    此处若用scanf需要敲回车，可题目似乎没说能敲回车，那就用优雅一点的写法
    此处_getch()能直接获取用户输入的字符
    */
    userInputChar = _getch();

    SetPos(12,8);

    printf("%c---------->%d", userInputChar,userInputChar);

    return 0;

}

static void SetPos(int x , int y){

    COORD point ={x,y};

    HANDLE HOutput = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleCursorPosition(HOutput,point);

}