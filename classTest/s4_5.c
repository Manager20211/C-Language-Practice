#include <stdio.h>

int main(void){

    int s1 = 0;
    int s2 = 0;
    char ch;

    while((ch = getchar()) != '\n'){

        if(ch >= '0' && ch <= '9'){

            s1++;

        }

        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')){

            s2++;

        }

    }

    printf("%d,%d\n", s1, s2);

    return 0;

}