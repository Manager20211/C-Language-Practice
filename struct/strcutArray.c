/*

练习任务 (ex2StructArray.c)
现在，轮到你来写了。

要求：

结构体 Student 包含 id (char 数组 20)、name (char 数组 20)、score (double)。

在 main 里定义 struct Student class1[3];

用 for 循环，让用户通过 scanf 输入这 3 个学生的信息。
（提示：输入字符串直接用 scanf("%s", class1[i].name);，不需要加 &。输入 double 用 %lf）

再用 for 循环，把输入完的信息打印出来。

*/

#include <stdio.h>

struct Student{

    char id[20];
    char name[20];
    double score;

};

int main (void){

    struct Student class1[3];

    for(int i =  0; i < 3; i++){

        printf("请输入学号:");
        scanf("%s", class1[i].id);

        printf("请输入姓名:");
        scanf("%s", class1[i].name);

        printf("请输入分数:");
        scanf("%lf", &class1[i].score);

    }

    for(int j =  0; j<3; j++){

        printf("%s\n", class1[j].id);
        printf("%s\n", class1[j].name);
        printf("%.1f", class1[j].score);

    }

    return 0;

}