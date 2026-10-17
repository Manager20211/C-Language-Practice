/*

练习 7 找错题：

c
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; i++); {
        printf("%d\n", i);
    }
    return 0;
}
这代码有什么问题？先判断，再编译运行，解释为什么输出很奇怪（或者为什么编译报错）。

多加分号了

*/

#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 5; i++); {
        printf("%d\n", i);
    }
    return 0;
}

/*

D:\C\C-Language-Practice\FlowControl\forBasic7.c: In function 'main':
D:\C\C-Language-Practice\FlowControl\forBasic7.c:26:24: error: 'i' undeclared (first use in this function)
   26 |         printf("%d\n", i);
      |                        ^

*/