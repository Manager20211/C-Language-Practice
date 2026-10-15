/*

练习 1
写一个程序：

用 while 输出 1 到 10

每个数字一行

*/

#include <stdio.h>

int main(void){

    int counter = 1;                //初始值

    while (counter <= 10){          //条件

        printf("%d\n", counter);    //内容
        counter++;                  //更新

    }

    return 0;

}

/*

运行结果
1
2
3
4                                                                                                                                                                  
5                                                                                                                                                                  
6                                                                                                                                                                  
7                                                                                                                                                                  
8                                                                                                                                                                  
9                                                                                                                                                                  
10

*/