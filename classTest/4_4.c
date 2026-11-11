#include <stdio.h>

int main(void){

    int userInputNum =  0;
    int clone = 0;
    int i = 1;
    int result = 0;

    scanf("%d",&userInputNum);

    clone = userInputNum;

    while(clone / 10 != 0){

        clone /= 10;

        i++;

    }

    clone = userInputNum;

    while(clone>0){

        result = result * 10 + clone % 10;

        clone /= 10;

    }

    if(userInputNum == result){

        printf("%d是回文数\n", userInputNum);

    }else{

        printf("%d不是回文数\n",userInputNum);

    }

    return 0;

}