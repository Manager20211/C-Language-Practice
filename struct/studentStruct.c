/*

练习任务 (ex1StudentStruct.c)
要求：

定义一个结构体 Student，包含 id (int)、name (char 数组，长度 20)、score (double)。

在 main 里声明一个 struct Student s1;

给 s1 的各个成员赋值（名字可以起你的名字）。

把 s1 的信息格式化打印出来（用 %d、%s、%.1f）。

（别忘了包含 <string.h>）

*/

#include <stdio.h>
#include <string.h>

struct Student{

    char id[20];
    char name[20];
    double score;

};

int main(void){

    struct Student s1;

    strcpy(s1.id,"0931");
    strcpy(s1.name, "李京泽");
    s1.score = 100.0;

    printf("%s\n", s1.id);
    printf("%s\n", s1.name);
    printf("%.1f\n", s1.score);

    return 0;

}
/*
第一遍我用int 类型跑通了而且完全正确
但我突然想到万一ID以0开头呢？
我尝试吧id修改成char，可结果运行结果出乎意料，多字了  ds解答:因为你忘记吧\0算进去了，导致划分内存不够,\0到后面去了,%s是读到\0为止的
0931李京泽                                                                                                                                                                                                                                                                                           
李京泽                                                                                                                                                                                                                                                                                               
100.0

*/

