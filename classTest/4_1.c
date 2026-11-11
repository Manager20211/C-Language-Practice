#include <stdio.h>
#include <math.h>

int main (void){


    int x,y=0,z=0;

    printf("请输入X的值:");

    scanf("%d",&x);

    z = x/2;

    switch(z){

        case 0:
            y=x;
            break;
        case 1:
        case 2:
            y = x*x+1;
            break;
        case 3:
        case 4:
            y = sqrt(x+1);
            break;
        default:
            y = 1.0 / (x+1);
            break;

    }

    printf("x=%d\ny=%d\n",x,y);

    return 0;


}