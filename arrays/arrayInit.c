/*

练习 A (ex1ArrayInit.c)：
声明一个包含 10 个元素的整型数组。用 for 循环给数组赋值 1 到 10，然后再遍历打印出来。

*/

#include <stdio.h>

int main(void){

    int arr1[10];

    for(int i = 1; i<=10; i++){

        arr1[i-1] = i;

    }

    for (int j = 0; j <=9; j++){

        printf("%d\n", arr1[j]);

    }

    return 0;

}

/*

运行结果:
1
2
3
4                                                                                                                                                                  
5                                                                                                                                                                  
6                                                                                                                                                                  
7                                                                                                                                                                  
8                                                                                                                                                                  
9                                                                                                                                                                  
10

*/