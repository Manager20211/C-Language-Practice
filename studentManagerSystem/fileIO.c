#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fileIO.h"
#include "stuStruct.h"

Student *head = NULL;
Student *tail = NULL;

void reloadFile(void){

    Student *current = head;
    Student *nextNode;
    
    while (current != NULL) {
        nextNode = current->next; // 先记住下一个
        free(current);            // 干掉当前的
        current = nextNode;       // 走向下一个
    }
    
    head = NULL;
    tail = NULL;

    readFile();
}


void readFile(void){


    FILE *fpRea;
    fpRea = fopen("StudentInfo.txt", "r");
    if(fpRea == NULL){

        printf("文件读取失败，可能是第一次运行该软件\n");

    }

    char headBuffer[100];
    fgets(headBuffer,sizeof(headBuffer),fpRea);

    char id[20];
    char name[20];
    float score = 0;

    while((fscanf(fpRea,"%s%s%f",id,name,&score)) == 3){

        struct Student *newNode = (struct Student *)malloc(sizeof(struct Student));
        strcpy(newNode->id,id);
        strcpy(newNode->name,name);
        newNode->score = score;
        newNode->next = NULL;

        if(head==NULL){

        head = newNode;
        tail = newNode;

        }
        else{

            tail->next = newNode;
            tail = newNode;

        }
        
    }

    fclose(fpRea);

}

void saveFile(void){

    FILE *fSave;
    fSave = fopen("StudentInfo.txt","w");

    if(fSave == NULL){

        printf("文件保存失败，请重试\n");

    }

    Student *dataSaver = head;

    fprintf(fSave,"学号\t姓名\t成绩\t\n");

    while(dataSaver != NULL){

        
        fprintf(fSave,"%s\t%s\t%.1f\t\n", dataSaver->id,dataSaver->name,dataSaver->score);
        dataSaver = dataSaver->next;

    }

    printf("文件已保存");

}