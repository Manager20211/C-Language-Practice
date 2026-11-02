#ifndef STU_STRUCT_H
#define STU_STRUCT_H

typedef struct Student{

    char id[20];      // 学号（因为学号可能以0开头，用字符串）
    char name[20];    // 姓名
    float score;
    struct Student *next;

}Student;

extern Student *head;
extern Student *tail;

#endif