#include <stdio.h>
#include <math.h>

int main(void){

    float num;
    float t, pi, n;
    int s;

    scanf("%f", &num);

    t = 1;
    pi = 0;
    n = 1;
    s = 1;

    while(fabs(t) >= num){

        pi = pi + t;
        n = n + 2;
        s = -s;
        t = s / n;

    }

    pi = pi * 4;

    printf("%6.4f\n", pi);

    return 0;

}