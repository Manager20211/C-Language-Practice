#include <stdio.h>

int main(void){

    int x;
    char y;
    scanf("%d", &x);

    if(x == 0){

        y = 'T';

    }
    else{

        y = 'F';

    }

    printf("%c\n", y);

    return 0;

}