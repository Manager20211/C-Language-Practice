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
#define N 5

int main(void){

    int arr[N];

}

/*

编译不通过
gcc -std=c11 -Wall -Wextra -g ConstAndDefine4.5.c -o ConstTest 
ConstAndDefine4.5.c: In function 'main':
ConstAndDefine4.5.c:23:9: warning: unused variable 'arr' [-Wunused-variable]
   23 |     int arr[N];
      |

*/