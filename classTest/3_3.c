#include <stdio.h>
#include <math.h>

int main(void){

    int x;
    double y = 0;
    int a = 0;

    printf("请输入x的值:");
    scanf("%d",&x);
    
    if(x<2){

        a = 0;

    }

    a = x / 2;

    

    switch(a){

        case 0:
            y = x;
            break;
        case 1:
        case 2:
            y= x*x+1;
            break;
        case 3:
        case 4:
            y = sqrt((x+1));
            break;
        default:
            y = 1.0 / (x+1);
            break;

    }

    printf("x=%d,y=%f",x,y);

    return 0;

}