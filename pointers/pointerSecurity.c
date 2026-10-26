/*

纯独立练习：指针安全防御
文件夹：pointersDeep
文件：ex1PointerSecurity.c

要求你自己写出下面的逻辑（我不给任何代码模板）：

声明一个整型变量 int a = 100;

声明一个整型指针 int *p = NULL; （这是防野指针的第一步）。

写一个 if 判断：如果 p == NULL，打印一句“指针为空，拒绝访问”。

让指针指向变量 a （即 p = &a;）。

写一个 if 判断：如果 p != NULL，通过指针 *p 把 a 的值改为 200，并打印“修改成功”。

在 main 最后打印变量 a 的值。
*/

#include <stdio.h>

int main (void){

    int a = 100;

    int *p = NULL;

    if(p == NULL){

        printf("指针为空，拒绝访问\n");

    }

    p = &a;

    //你这里有问题啊，万一我一开始没定义*p = NULL; 那野指针也能进来，不是有危险了吗？
    if(p!=NULL){

        *p = 200;
        printf("修改成功\n");

    }

    printf("%d\n", a);

    return 0;

}