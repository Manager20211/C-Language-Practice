/*

author:pr0xy
finishedDate:2026/11/02

*/
#include <stdio.h>
#include <stdlib.h>
#include "menu.h"
#include "fileIO.h"
#include "function.h"
#include "stuStruct.h"

int main(void){

    readFile();

    int userChoice = 0;

    while(1){


        userChoice = 0;

        printMenu();

        scanf("%d", &userChoice);

        switch(userChoice){                            
            case 1:
                addStudent();
                saveFile();
                system("cls"); //实现
                break;
            case 2:
                listStudent(head);
                system("cls");  //实现
                break;
            case 3:
                searchStudent();
                system("cls");  //实现
                break;
            case 4:
                deleteStudent();
                saveFile();
                system("cls");  //实现
                break;
            case 5:
                reloadFile();
                system("cls");
                break;
            case 6:
                saveFile();  //实现
                exit(0);

        }
    
    }

    return 0;

}

/*


    printf("1.添加学生(Add)\n"); //studentIO
    printf("2.查看全部学生 (List)\n"); //studentIO
    printf("3.查找学生 (Search)\n"); //studentIO
    printf("4.删除学生 (Delete)\n"); //studentIO
    printf("5.退出系统 (Exit)\n");

*/