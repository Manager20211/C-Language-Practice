#include <stdio.h>

int main(void){

    int t;
    scanf("%d", &t);
    if(t % 5 == 0 && t % 7 == 0){

        printf("Yes\n");

    }
    else{

        printf("No\n");

    }

    return 0;

}