/*

练习任务 (ex4PointerStrLen.c)
文件夹：pointers
文件名：ex4PointerStrLen.c

要求：

写一个函数 int getStrLen(char *str)，用上面的指针方法（while (*str != '\0')）求字符串长度。

在 main 里定义一个字符串 char msg[] = "Hohai University";。

把字符串传进函数，打印出长度。

（验证思考）如果把 msg 传进函数，函数里的 sizeof(str) 会是多少？为什么？      猜测:地址的大小？

写完跑通发我！搞定了这题，指针和字符串你就彻底拿捏了。

*/

#include <stdio.h>

int getStrLen(char *str){

    int counter = 0;

    while (*str != '\0'){

        counter++;
        str++;

    }

    return counter;

}

int main(void){

    char msg[]  = "Hohai University";

    printf("%d\n", getStrLen(msg));   //为什么我一开始写&msg不行

    return 0;

}

/*

运行结果:
16

*/