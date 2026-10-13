/*

练习 7：

c
#include <stdio.h>

int main(void)
{
    int a = 5;

    if (a = 0) {
        printf("真\n");
    } else {
        printf("假\n");
    }

    return 0;
}

先判断，再编译运行，看警告。

a=0这一块错误，正确写法应该是 a == 0

*/

#include <stdio.h>

int main (void){

    int a = 5;

    if (a = 0){

        printf("真\n");

    }
    else{

        printf("假\n");

    }

    return 0;

}

/*

警告:
PS D:\C\C-Language-Practice\FlowControl> gcc -std=c11 -Wall -Wextra -g IfBasic7.c -o IfBasic
IfBasic7.c: In function 'main':
IfBasic7.c:33:9: warning: suggest parentheses around assignment used as truth value [-Wparentheses]
   33 |     if (a = 0){
      | 

*/