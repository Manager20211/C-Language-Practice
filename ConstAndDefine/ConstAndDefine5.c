/*

练习 5：

c
#define SQUARE(x) x * x

int main(void)
{
    int a = SQUARE(2 + 3);
    printf("%d\n", a);
    return 0;
}
先判断输出是什么，再编译运行，最后改成正确写法。

*/

//判断输出 11   编译结果 11

//我认为的正确写法如下

#include <stdio.h>
//  #define SQUARE(x) (x)*(x)  初版代码。还是不够安全
#define SQUARE(x) ((x)*(x))         把(x)看作形式参数

int main (void){

    int a = SQUARE(2+3);

    printf("%d\n", a);

    return 0;

}

//输出结果 25