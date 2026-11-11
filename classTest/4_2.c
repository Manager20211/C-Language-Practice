#include <stdio.h>

int main(void){

    int buffer[10];

    int i = 0;

    int sum1 = 0;
    int sum2 = 0;

    while(i<10){

        scanf("%d", &buffer[i]);

        i++;

    }

    i  = 0;

    while(i<10){

        if(buffer[i] % 2 == 0){

            sum1 += buffer[i];


        }else{

            sum2+= buffer[i];

        }

        i++;

    }

    

    printf("偶数和为%d\n奇数和为%d\n", sum1,sum2);

    return 0;

}