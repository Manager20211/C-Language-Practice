/*

练习 6：

c
#include <stdio.h>

int main(void)
{
    int x = 2;
    int y = 3;

    switch (x) {
        case 1:
            printf("1\n");
            break;
        case y:
            printf("y\n");
            break;
        default:
            printf("default\n");
            break;
    }

    return 0;
}
先判断，再编译运行，看报错。

case 怎么能用变量呢？

*/

#include <stdio.h>

int main(void){

    int x = 2;
    int y = 3;

    switch (x){

        case 1:
            printf("1\n");
            break;
        case y:
            printf("y\n");
            break;
        default:
            printf("default\n");
            break;

    }

    return 0;

}

/*
编译结果
      |               ^
      |               ;
switchBasic6.c:38:9: warning: unused variable 'y' [-Wunused-variable]
   38 |     int y = 3;
      |

*/