/*

https://pintia.cn/problem-sets/14/exam/problems/type/6?problemSetProblemId=733

*/

#include <stdio.h>

void PrintN( int N );

int main(void){

    int N;

    scanf("%d", &N);
    PrintN(N);

    return 0;

}

void PrintN(int N){

    int  i = 1;

    for(i;i<=N;i++){

        printf("%d\n",i);

    }

}