#include <stdio.h>

int main(void){

    long n;
    long m = 0;
    int t;

    scanf("%ld", &n);

    while(n){

        t = n % 10;

        if(t % 2 == 0){

            m = m * 10 + t;

        }

        n = n / 10;

    }

    printf("%ld\n", m);

    return 0;

}