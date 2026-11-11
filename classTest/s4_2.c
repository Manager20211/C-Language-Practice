#include <stdio.h>

int main(void){

    int k;
    int m = 0;
    int mc = 0;

    scanf("%d", &k);

    while((k >= 2) && (mc < 6)){

        if((k % 7 == 0) || (k % 11 == 0)){

            m = m + k;
            mc++;

        }

        k--;

    }

    printf("%d\n", m);

    return 0;

}