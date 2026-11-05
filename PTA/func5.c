/*

https://pintia.cn/problem-sets/14/exam/problems/type/6?problemSetProblemId=737

*/

#include <stdio.h>

#define MAXN 10
typedef float ElementType;

ElementType Max( ElementType S[], int N );

int main ()
{
    ElementType S[MAXN];
    int N, i;

    scanf("%d", &N);
    for ( i=0; i<N; i++ )
        scanf("%f", &S[i]);
    printf("%.2f\n", Max(S, N));

    return 0;
}

ElementType Max(ElementType S[], int N){

    int i = 0;

    ElementType maxEle = S[i];

    for(i;i<N;i++){

        if(maxEle <= S[i]){

            maxEle = S[i];

        }

    }

    return maxEle;

}