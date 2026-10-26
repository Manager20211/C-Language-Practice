/*

练习任务：在堆区拯救悬空指针
文件夹命名建议：dynamicMemory
文件命名建议：ex1MallocBasic.c

要求你自己写出下面的逻辑（这次修好刚才那个 bug，让外面的指针能安全用）：

写一个函数 int* createInt()。

在函数内部，用 malloc 申请一个 int 大小的内存，让指针 p 指向它。

把 *p 赋值为 100。

return p; （这次返回的是堆区地址，函数死了它也还在）。

在 main 里调用它：int *ptr = createInt();

打印 *ptr 的值（应该能看到 100）。

极其重要：用完以后，必须 free(ptr);。

提示：

记得包含 <stdlib.h>。

别去复制上面的代码，自己理清逻辑一行行敲。

*/

#include <stdio.h>
#include <stdlib.h>

int* createInt(void){

    int *p = (int *)malloc(sizeof(int));
    *p = 100;

    return p;

}

int main(void){

    int *ptr = createInt();

    printf("%d\n", *ptr);

    free(ptr);
    return 0;

}

/*

运行结果：
100    

*/