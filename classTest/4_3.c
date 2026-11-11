#include <stdio.h>

int main(void){

    double e = 1;
    int n = 1;
    double addNum = 1;

    do{

        addNum /= n;

        e += addNum;

        n++;

    }while(addNum>1e-7);

    printf("%f", e);

    return 0;

}