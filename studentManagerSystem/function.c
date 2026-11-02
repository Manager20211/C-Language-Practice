#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function.h"
#include "fileIO.h" 
#include "stuStruct.h"

void addStudent(void){

    system("cls");


    printf("请依次输入学生的学号，姓名，成绩(输入0退出)\n");
    
    while(1){

        char tempId[20];
        char tempName[20];
        double tempScore = 0;

        printf("请输入学号\n");
        scanf("%s", tempId);

        if(strcmp(tempId,"0") == 0){

            break;

        }

        printf("请输入姓名\n");
        scanf("%s", tempName);

        printf("请输入分数\n");
        scanf("%lf", &tempScore);

        Student *newNode = (Student *)malloc(sizeof(Student));
        newNode->next = NULL;

        strcpy(newNode->id,tempId);
        strcpy(newNode->name,tempName);
        newNode->score = tempScore;

        if(head == NULL){

            head = newNode;
            tail = newNode;

        }else{

        tail->next = newNode;
        tail = newNode;

        }

        
        
    }
    
    saveFile();

}

void deleteStudent(){

    system("cls");

    int isDeleted = 0;

    printf("请输入要删除的学生的学号(输入0退出)\n");
    
    while(1){

        char tempId[20];

        scanf("%s", tempId);

        if(strcmp(tempId,"0") == 0){

            break;

        }

        Student *prev = head;
        Student *current = prev->next;

        //此处第一次写的时候写错了，字符串的比较必须用if(strcmp(string,string) == 0)进行比较
        if(strcmp(head->id,tempId) == 0){

            current = head;
            head = head->next;
            free(current);
            if (head == NULL) {

                tail = NULL;

            }

        printf("删除成功！\n");
            break;

        }

        while(current != NULL && prev != NULL){


            if(strcmp(current->id,tempId)==0){

                if(current == tail){

                    tail = prev;

                }
                prev->next = current->next;
                free(current);
                isDeleted = 1;
                break;

            }else{

                prev = prev->next;
                current = current->next;

            }

        }

        if(isDeleted == 1){

            printf("删除成功\n");

            //你在想什么？
            /*current = head;
            head = head->next;
            */

        }
        else{

            printf("删除失败，请确认学号输入有效\n");

        }

        isDeleted = 0;

    }

    saveFile();

}

void listStudent(Student *head){

    system("cls");

    Student *tail = head;

    while(tail != NULL){

        printf("%s\t", tail->id);
        printf("%s\t", tail->name);
        printf("%.1f\n", tail->score);

        tail = tail->next;

    }

    printf("打印完毕\n");

    while(getchar() != '\n'); //吃掉隐形的回车

    getchar();  //只有回车了才能getchar


}

void searchStudent(){

    system("cls");

    while(1){

    int isFound = 0;

    printf("请输入待搜索的学生的学号(输入0退出)\n");

    char tempId[20];

    scanf("%s", tempId);

    Student *searcher = head;

        if(strcmp(tempId,"0") == 0){

        break;

    }

        while(searcher != NULL){

            if(strcmp(searcher->id,tempId) == 0){

                printf("该学生的信息为:\n%s\t%s\t%.1f\t", searcher->id,searcher->name,searcher->score);
                isFound = 1;
                break;

            }
            else{

                searcher = searcher->next;

            }

        }

        if(isFound == 0){

            printf("很抱歉，没有查询到该学生的相关信息\n");

        }

        if(isFound == 1){

            searcher = head;

        }

        isFound = 0;

    }

}