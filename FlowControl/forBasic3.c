/*

练习 3 要求：

用 for 循环倒序输出 10 到 1，每个数字一行。

提示：初始值、条件、更新，该怎么写才能倒序？

*/

#include <stdio.h>

int main(void){

    for(int i = 10; i>=1; i--){

        printf("%d\n", i);

    }

    return 0;

}

/*

运行结果:
10
9
8
7                                                                                                                                                                                                                                                                                                    
6                                                                                                                                                                                                                                                                                                    
5                                                                                                                                                                                                                                                                                                    
4                                                                                                                                                                                                                                                                                                    
3                                                                                                                                                                                                                                                                                                    
2                                                                                                                                                                                                                                                                                                    
1 

*/