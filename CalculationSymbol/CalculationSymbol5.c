/*

练习 5：

c
#include <stdio.h>

int main(void)
{
    int a = 10;
    a += 5;    a = a+5; a为15
    a *= 2;    a = a*2; a为30
    a -= 3;    a = a-3; a为27
    a /= 4;    a = a/4; a为6
    a %= 4;    a = a%4; a为2

    printf("%d\n", a);
    return 0;
}

*/

//判断输出 2

#include <stdio.h>

int main(void){

    int a = 10;
    a += 5;
    a *= 2;
    a -= 3;
    a /= 4;
    a %= 4;

    printf("%d\n", a);

    return 0;

}

//编译结果 2 