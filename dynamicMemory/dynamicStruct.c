/*

下一关：把 malloc 和结构体结合起来（真·实战）
你之前学过定长的结构体数组：struct Student class1[3];。
现在既然有了 malloc，你完全可以做到：用户输入几个人，你就动态申请几个人的空间。

文件夹：dynamicMemory
文件：ex3DynamicStruct.c

要求你自己写出下面的逻辑（绝对不给代码模板）：

定义一个结构体 Student，包含学号 id（int）和分数 score（double）。

在 main 里，让用户输入一个整数 n（代表学生数量）。

用 malloc 申请 n 个 Student 大小的连续空间。

检查是否为 NULL。

用 for 循环，让用户输入这 n 个学生的学号和分数。
提示：访问成员，如果是指针，可以用 (p+i)->id，或者直接用数组方式 p[i].id。

用 for 循环，把他们的信息打印出来。

free 释放。

关键提示：
malloc 的总字节数怎么算？
n * sizeof(struct Student)。

*/

#include <stdio.h>
#include <stdlib.h>

struct Student{

    int id;
    double score;

};

int main(void){

    int n;

    scanf("%d", &n);

    struct Student *p = (struct Student *)malloc(sizeof(struct Student) * n);

    if(p == NULL){

        printf("指针修改失败，程序退出\n");

        return 1;

    }

    for(int i = 0; i<n; i++){

        scanf("%d", &((p+i)->id));
        scanf("%lf", &((p+i)->score));

    }

    for(int j = 0; j<n ; j++){

        printf("%d\t", (p+j)->id);

    }

    printf("\n");

    for(int k = 0;k<n;k++){

        printf("%.1f\t", (p+k)->score);

    }

    free(p);
    p = NULL;

    return 0;

}

