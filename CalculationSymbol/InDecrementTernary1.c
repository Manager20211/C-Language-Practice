/*

练习 1
写一个程序：

int a = 5;

int b = ++a;

输出 a 和 b

然后重置 a = 5;

int c = a++;

输出 a 和 c

观察两组结果的区别

*/

#include <stdio.h>

int main(void){

    int a = 5;
    int b = ++a;

    printf("a为%d\n", a);
    printf("b为%d\n", b);

    a = 5;

    int c = a++;

    printf("a重置后为%d\n", a);
    printf("c为%d\n", c);

    return 0;
    

}

/*

a为6                                                                                                                                                                                                                                                                                                        
b为6                                                                                                                                                                                                                                                                                                        
a重置后为6                                                                                                                                                                                                                                                                                                  
c为5   

*/