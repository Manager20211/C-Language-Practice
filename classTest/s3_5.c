#include <stdio.h>

int main(void){

    char c;
    scanf("%c", &c);
    if(c>= 'a' && c<= 'u'){

        c += 5;

    }
    else{

        c -= 21;

    }

    printf("%c\n", c);

    return 0;
        

}