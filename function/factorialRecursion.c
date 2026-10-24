/*

练习任务 (ex3FactorialRecursion.c)
文件夹：functions
文件名：ex3FactorialRecursion.c

要求：

把上面的 getFactorial 函数写出来。

在 main 里输入一个数（比如 5），调用该函数，打印结果。

如果输入 5，打印出来应该是 120。

思考题（不用写代码）：
如果我不小心把 if (n == 1) 写成了 if (n == 0)，会发生什么？

*/

#include <stdio.h>

int getFactorial(int n){

    if(n == 1){

        return 1;

    }
    else{

        return n*getFactorial(n-1);

    }

}

int main(void){

    printf("%d\n",getFactorial(5));

    return 0;

}

/*

运行结果:
120
写错变成0
*/