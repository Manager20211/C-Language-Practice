#include <stdio.h>

int main(void){

    int grade;
    scanf("%d",&grade);
    switch(grade){

        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
            printf("pass!");
            break;
        default:
            printf("not pass!");
            break;

    }

    return 0;

}