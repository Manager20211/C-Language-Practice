/*

要求自己写出下面的逻辑（我不给代码，完全凭你刚才的理解写）：

在 main 里声明一个指针数组 int *p[3]; 和一个数组指针 int (*q)[3];

分别用 printf 配合 sizeof 打印出它们的大小。
(提示：用 %zu 打印 sizeof 的结果，看看是不是一个是 24，一个是 8)

准备一个二维数组 int matrix[2][3] = {{1,2,3}, {4,5,6}};

把 matrix 赋值给数组指针 q（即 q = matrix;）。

尝试打印 q[0][1] 的值，看看是不是二维数组里的 2。

*/

#include <stdio.h>

int main(void){

    int *p[3];
    int (*q)[3];

    printf("%zu\n", sizeof(p));
    printf("%zu\n", sizeof(q));

    int matrix[2][3] = {

        {1,2,3},
        {4,5,6}

    };

    q = matrix;  //何意味，q不是一个含三个元素的数组的地址吗？这么能这样赋值的

    printf("%d\n", q[0][1]);

    return 0;

}

/*

运行结果:
24                                                                                                                                                                 
8 
2

*/