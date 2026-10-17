/*

用嵌套 for 循环输出一个星号直角三角形。

输入一个整数 n，例如输入 5，输出：

text
*
**
***
****
*****
提示：外层循环控制行数（1 到 n），内层循环控制每行的星号数。

*/

#include <stdio.h>

int main(void){

    int n;

    scanf("%d", &n);

    for(int row = 1; row<= n; row++){

        for(int times = 1; times <= row; times++){

            printf("*");

        }

        printf("\n");

    }

    return 0;

}

/*

运行结果:
5                                                                                                                                                                                                                                                                                                    
*                                                                                                                                                                                                                                                                                                    
**                                                                                                                                                                                                                                                                                                   
***                                                                                                                                                                                                                                                                                                  
****                                                                                                                                                                                                                                                                                                 
***** 

*/