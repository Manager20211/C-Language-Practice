/*

独立练习任务 (ex1CreateAndLinkNodes.c)
要求你自己写出下面的逻辑（纯独立拼装）：

定义结构体 Node，包含 int data 和 struct Node *next。

在 main 里，用 malloc 申请两个节点，分别用指针 p1 和 p2 指向它们。

给 p1->data 赋值为 100，给 p2->data 赋值为 200。

把这两个节点连起来：p1->next = p2;

把最后一个节点的指针置空：p2->next = NULL;

灵魂操作：只用 p1，打印出 p2 里的数据。
(提示：p1 知道 p2 的地址，那就是 p1->next。要想拿数据，就是 p1->next->data)

释放这两个节点的内存（注意：要分别 free(p1) 和 free(p2)，并且置空）。

*/

#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node *next;

};

int main(void){

    struct node *p1 = (struct node *)malloc(sizeof(struct node));
    struct node *p2 = (struct node *)malloc(sizeof(struct node));

    if(p1 == NULL || p2 == NULL){

        printf("指针获取失败\n");

        return 0;

    }

    p1->data = 100;
    p2->data = 200;
    p1->next = p2;
    p2->next = NULL;

    printf("%d\n", (*((*p1).next)).data);

    free (p1);
    free (p2);

    p1 = NULL;
    p2 = NULL;

    return 0;

}

/*

运行结果：

200     

*/