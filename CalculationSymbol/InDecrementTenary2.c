/*

练习 2
写一个程序：

int a = 10;

int b = --a;

输出 a 和 b

然后重置 a = 10;

int c = a--;

输出 a 和 c

*/

#include <stdio.h>

int main(void){

    int a = 10;
    int b = --a;

    printf("a为%d\n", a);
    printf("b为%d\n", b);

    a = 10;
    int c = a--;

    printf("a为%d\n", a);
    printf("c为%d\n", c);

    return 0;

}

/*

运行结果：
a为9                                                                                                                                                                                                                                                                                                        
b为9                                                                                                                                                                                                                                                                                                        
a为9                                                                                                                                                                                                                                                                                                        
c为10 


*/