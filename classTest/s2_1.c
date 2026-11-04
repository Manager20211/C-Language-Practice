#include <stdio.h>

int main (void){

    int a,b;
    int c = 0;
    
    scanf("%d,%d", &a,&b);

    int x1 = a/10; //个位
    int x2 = a%10; //百位
    int x3 = b/10; //十位
    int x4 = b%10; //千位

    c = x1+10*x3+100*x2+1000*x4;

    printf("c=%d\n", c);

    return 0;

}

/*

运行结果:
45,12 
c=2514

*/