/*

练习任务 (ex4FibonacciRecursion.c)
文件夹：functions
文件名：ex4FibonacciRecursion.c

要求：

写一个递归函数 int fib(int n)。

在 main 里输入一个 n（比如 6），打印出结果（第 6 项应该是 8）。

*/

#include <stdio.h>

int fib(int n){

    if(n == 1 || n == 2){

        return 1;

    }
    else{

        return fib(n-2)+fib(n-1);

    }

}

int main(void){

    int num;

    scanf("%d", &num);

    printf("%d\n", fib(num));

    return 0;

}

/*

运行结果:

6                                                                                                                                                                                                                                                                                                    
8 

*/