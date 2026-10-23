/*

练习 2 (ex6StringFunctions.c)
引入头文件 <string.h>。
用库函数 strlen() 计算 char str[] = "Computer"; 的长度，打印出来。
并验证和上面手工数的结果是不是一样的。

写好后在机房敲完发我（如果机房还是没网，记得古法截屏）

*/

#include <stdio.h>
#include <string.h>

int main(void){

    char str[] = "Computer";

    printf("%d\n", strlen(str));

    return 0;

}

/*

运行结果：
8  

你对时间没有感知的吗？我上次和你说在机房是什么时候

*/