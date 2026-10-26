#include <stdio.h>

struct Student{

    int id;
    
};

int main(void){

    struct Student s1;
    s1.id = 100;

    struct Student *p = &s1;

    printf("%d\n", p->id);

    return 0;

}