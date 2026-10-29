/*

要求（纯独立写，不给代码）：

建一个只有 3 个节点的链表，数据分别是 1, 2, 3。（直接用你刚才学的方法建就行）

现在，我们要删掉中间那个节点（数据为 2 的节点）。

你需要声明两个指针：

struct Node *prev = head; （指向第 1 个节点）

struct Node *curr = head->next; （指向第 2 个节点）

执行“断链”操作：

让第 1 个节点直接指向第 3 个节点（prev->next = curr->next;）

释放第 2 个节点（free(curr);）

最后，遍历打印整条链表，看看是不是变成了 1 3。

*/

#include <stdio.h>
#include <stdlib.h>

struct Node {

    int data;
    struct Node *next;

};

int main (void){

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = NULL;

    struct Node *tail = head;

    for(int i = 2; i<=3; i++){

        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

        newNode->data = i;
        newNode->next = NULL;

        tail->next = newNode;
        tail = newNode;

    }

    struct Node *prev = head;
    struct Node *current = head->next;

    head->next = current->next;

    free(current);

    while(prev != NULL){

        printf("%d\t", prev->data);

        prev = prev->next;

    }

    return 0;

}