/*

https://pintia.cn/problem-sets/14/exam/problems/type/6?problemSetProblemId=734

*/

#include <stdio.h>

#define MAXN 10

double f( int n, double a[], double x );

int main()
{
    int n, i;
    double a[MAXN], x;
    
    scanf("%d %lf", &n, &x);
    for ( i=0; i<=n; i++ )
        scanf("%lf", &a[i]);
    printf("%.1f\n", f(n, a, x));
    return 0;
}

double f(int n , double a[], double x){

    int j = 0;
    int k = 0;
    double result = 0;
    double xre = 1;

    for (j;j<=n;j++){

        for(k;k<=j-1;k++){

            xre *= x;

        }

        result += a[j]*xre;

        xre = 1;
        k = 0;

    }

    return  result;

}