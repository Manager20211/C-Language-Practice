/*

要求（纯独立拼装，我不给代码）：

定义结构体 Node（包含 int data 和 struct Node *next）。

在 main 里，让用户输入一个整数 n，代表你要建几个节点。

处理第 1 个节点（特殊处理）：

用 malloc 申请第一个节点，让 head 指向它。

给它的 data 赋值为 1，next 赋值为 NULL。

让 tail 也指向它（因为现在它既是头，也是尾）。

用 for 循环处理后面的节点（从 i = 2 一直循环到 n）：

申请一个新节点 newNode。

赋数据 newNode->data = i，newNode->next = NULL。

挂到车尾：tail->next = newNode;

尾指针跟上来：tail = newNode;

敲完之后，编译运行。先不要打印链表，程序能正常跑完不报错就行。

*/

#include <stdio.h>
#include <stdlib.h>

struct Node {

    int data;
    struct Node *next

};

int main(void){

    int n;

    scanf("%d", &n); //获取节点个数

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = NULL;

    struct Node *tail = head;


    for (int i = 2; i <=n;i++){

        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

        newNode->data = i;
        newNode->next = NULL;

        tail->next = newNode; //把上一个和最后一个连接
        tail = newNode; //把尾巴放到最后一个

    }

    /*
    
    要求自己写出下面的逻辑：

    不要动你刚才建链表的代码。

    在 main 函数的最后，写一个 while 循环，把整条链表打印出来。
    
    */
   int j = 1;

   struct Node * dataReader = head;

    while(j<=n){

        printf("%d\t", dataReader->data);

        dataReader = dataReader->next;

        j++;

    }

    /*
    
    独立练习任务 3：销毁整条链表
    要求自己写出下面的逻辑：

    不要动前面的建链表和打印代码。

    在 return 0; 之前，写一段 while 循环，把整条链表彻底销毁。

    提示：

    千万别直接把 head 给 free 了，不然你就找不到后面的节点了。

    你要用两个指针：一个 current 指向当前要杀掉的节点，一个 next 指向下一个节点。

    动作顺序：先让 next = current->next（记住后事），再 free(current)（杀掉当前），最后 current = next（走向下一个）。
    
    */

    struct Node *currentNode = head;
    struct Node *nextNode = head;

    while(currentNode != NULL){

        nextNode = currentNode->next;
        free(currentNode);

        currentNode = nextNode;

    }

    free(currentNode);
    free(nextNode);
    free(dataReader);

    head = NULL;
    

    return 0;

}

/*

运行结果:
3                                                                                                                                                                  
1       2       3

*/