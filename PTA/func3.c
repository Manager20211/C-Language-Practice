/*

https://pintia.cn/problem-sets/14/exam/problems/type/6?problemSetProblemId=735

*/

#include <stdio.h>

#define MAXN 10

int Sum ( int List[], int N );

int main ()
{
    int List[MAXN], N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%d", &List[i]);
    printf("%d\n", Sum(List, N));

    return 0;
}

int Sum(int List[], int N){

    int i = 0;
    int result = 0;

    for(i;i<N;i++){

        result += List[i];

    }

    return result;

}