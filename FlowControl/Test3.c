/*

测试题 3：简易菜单循环 (考察 do while + switch + break)
要求：
打印一个菜单，让用户循环选择：

打印 "Hello"

打印 "World"

退出程序
如果输入其他数字，提示“无效输入”。要求程序能一直循环，直到用户输入 0 才退出（退出时打印“再见”）。
提示：使用 do while 包裹整个输入和 switch 逻辑，在 case 0: 里使用 break 跳出 switch，同时利用 while 的条件结束循环。

*/

#include <stdio.h>

int main(void){

    int userInputNum;

    do{


        for(int i = 1; i<= 20; i++){

            printf("*");

        }

        printf("\n*       1.Hello    *\n");
        printf("\n*       2.World    *\n");

        for(int i = 1; i<= 20; i++){

            printf("*");

        }

        printf("\n");

        scanf("%d", &userInputNum);

        switch(userInputNum){

            case 0:
                break;
            case 1:
                printf("Hello\n");
                break;
            case 2:
                printf("World\n");
                break;
            default:
                printf("无效输入\n");

        }


    }while(userInputNum != 0);

    return 0;

}