/*

练习 4（找错题）

下面的代码想让用户不断输入数字，遇到负数就结束循环。

c
#include <stdio.h>

int main(void)
{
    int num;
    while (1) {
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        printf("你输入了:%d\n", num);
    }
    printf("程序结束\n");
    return 0;
}

break就整个程序结束了,不会执行printf

*/


/*
#include <stdio.h>

int main(void){

    int num;
    while(1){

        scanf("%d", &num);

        if(num < 0){

            break;

        }
        else{

            continue;

        }

    }

    printf("你输入了:%d\n", num);
    printf("程序结束\n");

    return 0;

}

*/

#include <stdio.h>

int main(void)
{
    int num;
    while (1) {
        scanf("%d", &num);
        if (num < 0) {
            break;
        }
        printf("你输入了:%d\n", num);
    }
    printf("程序结束\n");
    return 0;
}
/*

运行结果:
53245                                                                                                                                                                                                                                                                                                
3243                                                                                                                                                                                                                                                                                                 
-1                                                                                                                                                                                                                                                                                                   
你输入了:-1                                                                                                                                                                                                                                                                                          
程序结束 

*/
