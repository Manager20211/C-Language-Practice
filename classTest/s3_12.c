#include <stdio.h>

int main(void){

    int x,a,y;
    scanf("%d", &x);
    if(x<0){

        a = -1;

    }
    else{

        a = x /10;

    }

    switch(a){

        case -1:
            y = -1;
            break;
        case 0:
            y = x+1;
            break;
        case 2:
        case 3:
            y = -5*x+1;
            break;
        default:
            y = x+x;

    }

    printf("y=%d\n", y);

    return 0;

}