#include <stdio.h>

int main(void){

    int a = 10;
    printf("The size of a is %zu\n", sizeof a);
    printf("The size of a is %zu\n", sizeof (a));
    printf("The size of int is %zu\n", sizeof (int));
    return 0;

}

/*

    sizeof用于类型时，括号不能省略。比如只能写sizeof (int)
    但当sizeof用于某个变量时，括号可以省略

*/