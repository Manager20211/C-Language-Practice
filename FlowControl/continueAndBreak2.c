/*

练习 2 要求：

用 for 循环输出 1 到 10。

但是跳过所有的偶数（用 continue 实现）。

（提示：遇到偶数直接 continue，不执行后面的 printf）。

*/

#include <stdio.h>

int main(void){

    for(int i = 1; i <= 10; i++){

        if(i % 2 == 0){
            
            continue;

        }

        printf("%d\n", i);

    }

    return 0;

}

/*

1                                                                                                                                                                                                                                                                                                    
3                                                                                                                                                                                                                                                                                                    
5                                                                                                                                                                                                                                                                                                    
7                                                                                                                                                                                                                                                                                                    
9

*/