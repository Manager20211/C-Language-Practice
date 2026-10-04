/*

练习 3 要求：

char lower = 'b';

把它转成大写，输出结果

提示：lower - 32 或 lower - 'a' + 'A'

*/

#include <stdio.h>

int main(void){

    char lower = 'b';

    char upper = lower-32;   //说实话这个32有点让人不知所云，所以ds给出了规范化写法
    char upper2 = lower - ('a' - 'A');

    printf("%c\n", upper);
    printf("%c\n", upper2);

    return 0;

}

/*

运行结果：
B   

*/