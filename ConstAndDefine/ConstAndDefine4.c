/*

练习 4 要求：

写两个程序：

第一个用 const int N = 5;

第二个用 #define N 5

分别用 N 定义一个数组：

c
int arr[N];

*/

#include <stdio.h>

int main(void){

    const int N = 5;

    int arr[N];

    return 0;

}

/*

编译不通过
gcc -std=c11 -Wall -Wextra -g ConstAndDefine4.c -o ConstAndDefine4
                                                                                                              
ConstAndDefine4.c: In function 'main':
ConstAndDefine4.c:24:9: warning: unused variable 'arr' [-Wunused-variable]
   24 |     int arr[N];
      |         ^~~

*/