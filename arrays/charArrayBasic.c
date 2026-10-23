/*

练习 1 (ex5CharArrayBasic.c)
要求：

定义一个字符数组 char str[] = "Computer";。

用 while 循环遍历这个数组，直到遇到 '\0' 为止。

在循环里，统计这个字符串的长度（也就是计数字符个数），最后打印出来。
(不能调用任何库函数，纯手工数)

*/

#include <stdio.h>

int main(void){

    char str[] = "Computer";
    int i = 0;

    while (str[i] != '\0'){

        printf("%c", str[i]);
        i++;

    }

    return 0;

}

/*

运行结果：
Computer       

*/