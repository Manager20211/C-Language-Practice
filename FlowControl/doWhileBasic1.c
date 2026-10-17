/*

练习 1
用 do while 循环输出 1 到 5。每个数字一行。

*/

#include <stdio.h>

int main(void){

    int num = 1;

    do{

        printf("%d\n", num);
        num++;

    }while(num<=5);

    return 0;

}

/*

运行结果:
1                                                                                                                                                                                                                                                                                                    
2                                                                                                                                                                                                                                                                                                    
3                                                                                                                                                                                                                                                                                                    
4                                                                                                                                                                                                                                                                                                    
5

*/