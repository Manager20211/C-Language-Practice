/*

练习 4 要求：

char c = 'A';

输出：

text
c = A
c 的 ASCII 码 = 65

*/

#include <stdio.h>

int main (void){

    char c = 'A';
    
    printf("c = %c\n", c);
    printf("c的ASCII码 = %d\n", c);
    /*
    练习要求到这里就结束了，但我刚刚看到了
    char本身是%c
    char的ASCII用%d
    signed char用%hhd
    unsigned char用%hhu
    那末什么是signed char呢？
    不妨自己打一下吧
     */
    
    signed char charTest = 'A';
    printf("result:%hhd", charTest);

    return 0;

}


/*
运行结果如下
c = A                                                
c的ASCII码 = 65                                      
result:65  
难道说signed char就是该字符的ASCII值？
deepseek你看到这的时候记得为我解读一下
*/


/*

Ds的解读如下
在有些平台(如X86)默认char就是signed char
同时%hhu和%hhd类比 %u和%d
都是用于输出ASCII值

*/