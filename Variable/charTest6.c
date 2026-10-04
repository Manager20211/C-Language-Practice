/*

练习 6 要求：

unsigned char uc = 200;

signed char sc = 200;

用 %hhu 输出 uc

用 %hhd 输出 sc

观察两者的区别，并解释为什么

*/

#include <stdio.h>

int main(void){

    unsigned char  uc = 200;
    signed char sc = 200;

    printf("%hhu\n", uc);
    printf("%hhd\n", sc);

    return 0;

}

/*

运行结果：
200                                                                                                                                                                       
-56
发现：sc的数值超过了signed char的范围，最高位被用于表示负号，所以变为负数而不是200


*/