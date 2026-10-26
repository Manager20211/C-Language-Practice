/*

#include <stdio.h>

struct Student {
    int id;
    double score;
};

// 参数接收的是指针：struct Student *p
void modifyScore(struct Student *p) {
    // 因为 p 是地址，用 -> 就能直接改外面的原件
    p->score = 99.5; 
}

int main(void) {
    struct Student s1;
    s1.id = 1;
    s1.score = 60.0;

    printf("修改前成绩: %.1f\n", s1.score);

    // 把 s1 的地址传进去
    modifyScore(&s1);

    printf("修改后成绩: %.1f\n", s1.score);

    return 0;
}

*/

#include <stdio.h>

struct Student{

    int id;
    double score;

};

void modifyScore(struct Student *p){

    p->score = 99.5;

}

int main(void){

    struct Student s1;
    s1.id = 1;
    s1.score = 60.0;

    printf("%.1f\n", s1.score);

    modifyScore(&s1);

    printf("%.1f\n", s1.score);

    return 0;

}