/*

练习 4 要求：

输入一个字符

用 switch 判断是不是元音字母（a、e、i、o、u）

输出 元音 或 辅音

提示：可以用贯穿，让多个 case 共用一个 break

c
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
    printf("元音\n");
    break;

*/

#include <stdio.h>

int main(void){

    char userInputChar;

    printf("请输入一个小写字母:");
    scanf(" %c", &userInputChar);

    if ( userInputChar >= 'a' && userInputChar <= 'z'){

        switch (userInputChar){

            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("元音\n");
                break;
            default:
                printf("辅音\n");
                break;

        }

    }
    else{

        printf("Invalid Input\n");

    }

    return 0;

}

/*

运行结果:
请输入一个小写字母:b                                                                                                                                               
辅音

*/