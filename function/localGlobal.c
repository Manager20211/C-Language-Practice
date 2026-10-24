/*

练习 1 (ex1LocalGlobal.c)
验证局部变量和全局变量。

在文件最上面定义全局变量 int global_num = 100;

在 main 里面定义局部变量 int local_num = 50;

打印这两个变量。

（思考题，不用写代码）如果我在 main 外面再写一个函数 test()，test() 里面能打印 local_num 吗？（答案在代码里注释写一下）。

*/

#include <stdio.h>

int globalNum = 100;

int main(void){

    int localNum = 50;

    printf("%d\n", globalNum);
    printf("%d\n", localNum);

    return 0;

}

/*

答案:不能

*/