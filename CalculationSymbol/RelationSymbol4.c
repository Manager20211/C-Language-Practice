/*

练习 4：

c
#include <stdio.h>

int main(void)
{
    int a = 0;
    int b = 5;

    if (a != 0 && b / a > 1) {
        printf("条件为真\n");
    } else {
        printf("条件为假\n");
    }

    return 0;
}


先判断输出，再编译运行。
解释为什么不会除以 0。

*/


//我判断输出为"条件为假"
//对&&来说存在短路，a!=0已经为假，b/a不再执行

#include <stdio.h>

int main (void){

    int a = 0;
    int b = 5;

    if(a != 0 && b / a > 1){

        printf("条件为真\n");

    }
    else{

        printf("条件为假\n");

    }

    return 0;

}

//运行结果 条件为假
