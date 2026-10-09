/*

练习 3 要求：

用 #define 定义 MAX_SIZE 100

输出它

然后尝试在 #define 末尾加分号，观察会发生什么

*/


#include <stdio.h>
#define MAX_SIZE 100

int main (void){

    printf("%d\n", MAX_SIZE);

    return 0;

}

/*

未加分号时的运行结果：
100

*/

/*

加分号运行结果：
D:\C\C-Language-Practice\ConstAndDefine\DefineTest3.c:13:21: error: expected ')' before ';' token
   13 | #define MAX_SIZE 100;
      |                     ^
D:\C\C-Language-Practice\ConstAndDefine\DefineTest3.c:18:20: note: in expansion of macro 'MAX_SIZE'
   18 |     printf("%d\n", MAX_SIZE);
      |                    ^~~~~~~~
D:\C\C-Language-Practice\ConstAndDefine\DefineTest3.c:18:11: note: to match this '('
   18 |     printf("%d\n", MAX_SIZE);
      |

*/