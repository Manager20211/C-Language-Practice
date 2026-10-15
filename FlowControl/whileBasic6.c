/*

练习 6：

c
#include <stdio.h>

int main(void)
{
    int i = 1;

    while (i <= 5) {
        printf("%d\n", i);
    }

    return 0;
}

先判断，再编译运行，看结果。
如果程序停不下来，用 Ctrl + C 强制结束。
我的判断:没有更新，程序陷入死循环
*/

#include <stdio.h>

int main(void){

    int i = 1;

    while (i <= 5){

        printf("%d\n", i);

    }

    return 0;

}

//结果:死循环，一直输出1