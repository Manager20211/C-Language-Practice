#include <stdio.h>

int main(void){

    int x;
    int y = 0;

    scanf("%d", &x);

    y  = x*x*x*x + 3*x*x*x - 2*x;

    printf("%d\n", y);

    return 0;

}

/*

运行结果:
1
2

*/