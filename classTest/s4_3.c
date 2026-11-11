#include <stdio.h>

int main(void){

    float grade, max, min;

    scanf("%f", &grade);

    max = min = grade;

    while(grade >= 0){

        if(grade > max) max = grade;

        if(grade < min) min = grade;

        scanf("%f", &grade);

    }

    printf("max=%f, min=%f\n", max, min);

    return 0;

}