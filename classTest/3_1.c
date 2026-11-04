#include <stdio.h>

int main(void){

    char userInputC;

    scanf("%c", &userInputC);

    if(userInputC >= 0 && userInputC <32){

        printf("为控制字符\n");

    }else if(userInputC >= '0' && userInputC <= '9'){

        printf("为数字\n");

    }else if(userInputC >= 'a' && userInputC <= 'z'){

        printf("为小写字母\n");

    }else if(userInputC >= 'A' && userInputC <= 'Z'){

        printf("为大写字母\n");

    }else{

        printf("为其它字符");

    }

    return 0;

}