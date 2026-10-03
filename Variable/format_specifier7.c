/*

练习 7 要求：

long a = 1234567890L;

先用 %ld 输出

再用 %d 输出

观察两个结果，把观察写给我

*/

#include <stdio.h>

int main (void){

    long a = 1234567890L;

    printf("%ld\n", a);
    printf("%d\n", a);

    return 0;

}

/*
运行结果：1234567890                                                                                                                                                                
1234567890 
发现：好像没差别啊
回顾：傻子Ds出错题了，Ds想说的是在Linux上long能表示8字节，%d只能读4字节
*/