/*

练习 5：

c
#include <stdio.h>

int main(void)
{
    int a = 5;

    if (a > 0 || printf("hello\n")) {
        printf("进入 if\n");
    } else {
        printf("进入 else\n");
    }

    return 0;
}

先判断输出，再编译运行。
解释为什么 hello 没有打印。

*/

//判断输出 进入if
// ||有短路特性， a>0已经为真，直接进入if语，print语句不执行

#include <stdio.h>

int main (void){

    int a = 5;

    if (a > 0 || printf("hello\n")){     //这里的printf返回6个字符，也是非0,非0为真。

        printf("进入if\n");

    }
    else{

        printf("进入else\n");

    }

    return 0;

}

//运行结果
/*hello
进入if 
怎么回事？
*/
