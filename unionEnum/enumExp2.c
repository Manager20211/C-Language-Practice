/*

要求（非常简单，你只需验证概念）：

定义一个枚举 enum Season { SPRING, SUMMER, AUTUMN, WINTER };

在 main 里，声明一个变量 enum Season s = AUTUMN;

打印 s 的值（用 %d）。看看是不是 2。

尝试把 s 赋值为 0（s = 0;），再打印它看看。

*/

#include <stdio.h>

enum Season { 

    SPRING,
    SUMMER,
    AUTUMN,
    WINTER

};

int main(void){

    enum Season s = AUTUMN;

    printf("%d\n", s);

    s = 0;

    printf("%d\n", s);

    return 0;

}

/*

运行结果：
2                                                                                                                                                                  
0   

*/