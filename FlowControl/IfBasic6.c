/*

练习 6：

c
#include <stdio.h>

int main(void)
{
    int a = 5;

    if (a > 0) {
        if (a > 10) {
            printf("a > 10\n");
        } else {
            printf("0 < a <= 10\n");
        }
    } else {
        printf("a <= 0\n");
    }

    return 0;
}
先判断输出，再编译运行。

猜测输出为0 < a <= 10

*/

#include <stdio.h>

int main(void){

    int a = 5;

    if( a > 0){

        if(a > 10){

            printf("a>10\n");

        }
        else{

            printf("0<a<10\n");

        }

    }
    else{

            printf("a<=0\n");

        }

        return 0;


}

/*

运行结果:
0<a<10  

*/