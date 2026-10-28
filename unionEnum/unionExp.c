/*

要求自己验证共用体的“覆盖”现象：

定义一个共用体 union Data，里面包含一个 int i 和一个 char c。

在 main 里声明 union Data d;

打印一下 sizeof(union Data) 的大小。
（提示：看看是不是 4 个字节？因为最大的成员 int 就是 4 字节。）

赋值 d.i = 65;

分别打印 d.i（用 %d）和 d.c（用 %c）。
（奇迹发生：虽然你没给 d.c 赋值，但打印出来应该是 65 和 A，因为 65 的 ASCII 码就是 A，它们共用了一整块内存。）

赋值 d.c = 'B';

再次打印 d.i 和 d.c。
（灾难发生：因为 d.c 把第一个字节改成了 66，此时 d.i 不再是 65 了。）

*/

#include <stdio.h>

union Data{

    int i;
    char c;

};

int main(void){

    union Data d;

    printf("%u\n", sizeof(union Data));

    d.i  = 65;

    printf("%d\n" , d.i);

    printf("%c\n", d.c);

    d.c = 'B';

    printf("%d\n", d.i);
    printf("%c\n", d.c);

    return 0;

}


/*

4                                                                                                                                                                  
65                                                                                                                                                                 
A                                                                                                                                                                  
66                                                                                                                                                                 
B

*/