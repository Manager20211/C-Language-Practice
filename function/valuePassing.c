    /*

    练习 1
    写一个函数 doubleValue，接收一个整数，在函数内部把它乘以 2 并打印。
    在 main 里声明一个变量，调用该函数，然后打印这个变量，观察变化。

    */

    #include <stdio.h>

    void doubleValue(int a){

        a *=2;
        printf("%d\n", a);

    }

    int main(void){

        int num = 1;

        doubleValue(num);

        printf("%d\n", num);

        return 0;

    }

    /*

    运行结果:
    2                                                                                                                                                                  
    1

    */