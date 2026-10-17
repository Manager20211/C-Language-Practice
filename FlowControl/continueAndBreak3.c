/*

练习 3 要求：

输入一个正整数 n。

判断它是不是素数（质数）。

素数定义：只能被 1 和它本身整除的数（大于 1）。

用 for 循环从 2 试除到 n-1，如果发现能整除的，说明不是素数，直接 break

*/

#include <stdio.h>

int main(void){

    int n;

    scanf("%d", &n);
    
    int i;

    for(i = 2; i <= n-1; i++){

        if(n % i == 0){

            printf("不是素数\n");
            break;

        }

    }

    if(i == n){

        printf("是素数\n");

    }

    return 0;

}

/*

56                                                                                                                                                                                                                                                                                                   
不是素数 

*/