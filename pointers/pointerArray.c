/*

练习任务 (ex3PointerArray.c)
文件夹：pointers
文件名：ex3PointerArray.c

要求：

定义一个数组 int arr[5] = {10, 20, 30, 40, 50};

定义一个指针 int *p = arr; （等价于 &arr[0]）。

用 for 循环和指针（比如 *(p + i)），把数组遍历打印出来。

打印数组名 arr 和 指针 p 的地址，看看是不是一样。

*/

#include <stdio.h>

int main(void){

    int arr[5] = {10,20,30,40,50};

    int *p = arr;

    for(int i = 0;i<5;i++){

        printf("%d    ", *(p+i));

    }

    printf("\n%p\n", &arr);
    printf("%p\n", p);

    return 0;

}

/*

运行结果:

10    20    30    40    50                                                                                                                                                                                                                                                                           
00000000005FFE40                                                                                                                                                                                                                                                                                     
00000000005FFE40

*/