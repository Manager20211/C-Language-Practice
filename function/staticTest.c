/*

练习 2 (ex2StaticVar.c)
要求：
把刚才我给你拆解的那段代码敲进去跑一遍，感受一下。

c
#include <stdio.h>

void testStatic(void) {
    int normal = 0;          // 普通变量
    static int special = 0;  // 加了 static 的变量
    
    normal++;
    special++;
    
    printf("normal = %d, special = %d\n", normal, special);
}

int main(void) {
    testStatic(); // 第 1 次调用
    testStatic(); // 第 2 次调用
    testStatic(); // 第 3 次调用
    return 0;
}
运行后，把打印结果发我，并顺便告诉我：
为什么 normal 每次都是 1，而 special 却在增加？

*/

#include <stdio.h>

void testStatic(void){

    int normal =  0;
    static int special = 0;

    normal++;
    special++;

    printf("normal = %d, special = %d\n", normal, special);

}

int main(void){

    testStatic();
    testStatic();
    testStatic();
    return 0;

}

/*

运行结果:
normal = 1, special = 1                                                                                                                                                                                                                                                                              
normal = 1, special = 2                                                                                                                                                                                                                                                                              
normal = 1, special = 3 

special 被static修饰了，相当于一个被锁的房间

*/