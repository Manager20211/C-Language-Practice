/*

练习 2 要求：

char c1 = 'a';

char c2 = 'A';

输出 c1 - c2

观察结果，说明大小写字母的 ASCII 差是多少

*/

#include <stdio.h>


int main(void){

    char c1 = 'a';
    char c2 = 'A';

    printf("%d", c1-c2);

    return 0;

}

/*

运行结果：
32  

*/