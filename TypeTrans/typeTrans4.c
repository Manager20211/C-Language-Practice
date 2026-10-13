/*

练习 4：

c
#include <stdio.h>

int main(void)
{
    int a = -1;
    unsigned int b = 1;

    if (a < b) {
        printf("a < b\n");
    } else {
        printf("a >= b\n");
    }

    return 0;
}
先判断输出，再编译运行。

我判断输出是a>=b 因为a会被转换为unsigned int，变成一个很大的数

*/

#include <stdio.h>

int main(void){

    int a = -1;
    unsigned int b = 1;

    if(a < b){

        printf("a<b\n");

    }
    else{

        printf("a>=b\n");

    }

    return 0;

}

/*

运行结果
a>=b

*/