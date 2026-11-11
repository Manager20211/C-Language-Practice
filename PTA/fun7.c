/*

https://pintia.cn/problem-sets/14/exam/problems/type/6?problemSetProblemId=739

本题要求实现一个函数，判断任一给定整数N是否满足条件：它是完全平方数，又至少有两位数字相同，如144、676等。

一个数字，大于9位，肯定有两个数字相同了，只有个位，同样不可能，这两种情况直接不用管
那么接下来我们只要考虑位数在2到8之间

*/

#include <stdio.h>
#include <math.h>

int IsTheNumber ( const int N );

int main()
{
    int n1, n2, i, cnt;
    
    scanf("%d %d", &n1, &n2);
    cnt = 0;
    for ( i=n1; i<=n2; i++ ) {
        if ( IsTheNumber(i) )
            cnt++;
    }
    printf("cnt = %d\n", cnt);

    return 0;
}

int IsTheNumber(const int N){

    char buffer[10] = {0};

    int digit = 0;
    int i = N;

    

    if(sqrt(N)- (int)(sqrt(N))<1e-6){

        while(i>0){

            digit = i % 10;

            if(buffer[digit]){

                return 1;

            }
            
            buffer[digit] = 1;

            i /= 10;

        }

        return 0;

    }
    else{

        return 0;

    }

}