/*

练习 5：嵌套循环中的 break
请先不要编译运行，用脑子推演一下下面这段代码会输出几行，分别是什么：

c
#include <stdio.h>

int main(void)
{
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (j == 2) {
                break;
            }
            printf("i=%d, j=%d\n", i, j);
        }
    }
    return 0;
}
推演完之后，写出你的答案，然后再编译运行验证，并解释为什么结果是这样的。

我推测运行结果为
i=1,j=1
i=2,j=1
i=3,j=1

*/

#include <stdio.h>

int main(void){

    for(int i = 1; i<=3; i++){

        for(int j = 1; j<=3 ; j++){

            if(j==2){

                break;

            }

            printf("i=%d,j=%d\n", i,j);

        }

    }

    return 0;

}

/*

运行结果:
i=1,j=1                                                                                                                                                                                                                                                                                              
i=2,j=1                                                                                                                                                                                                                                                                                              
i=3,j=1  

*/