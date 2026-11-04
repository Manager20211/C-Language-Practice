#include <stdio.h>

int main(void){

    int m = 246;
    int x;
    printf("请输入x=");
    scanf("%d",&x);
    if(x == m){

        printf("Right\n");

    }else if(x>m){

        printf("Wrong\nToo high\n");

    }
    else{

        printf("Wrong\nToo low\n");

    }

    return 0;

}