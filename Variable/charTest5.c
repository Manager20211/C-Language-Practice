/*

练习 5 要求：

用 scanf 读入一个字符

输出它的字符形式和 ASCII 码

*/

#include <stdio.h>

int main(void){

    char c;

    printf("请输入一个字符:");
    scanf(" %c", &c);

    printf("%c\n", c);
    printf("%d\n", c);

    return 0;

}

/*

运行结果:
请输入一个字符:B                                                                                                                                                          
B                                                                                                                                                                         
66


*/