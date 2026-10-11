/*

练习 7 要求：

输入一个字符

判断它是不是小写字母（'a' 到 'z'）

输出 小写字母 或 不是小写字母

提示：用 c >= 'a' && c <= 'z'

*/

#include <stdio.h>

int main(void){

    char userInput;

    printf("请输入一个字符:");
    scanf("%c", &userInput);

    if(userInput >= 'a' && userInput <= 'z'){

        printf("小写字母");

    }
    else{

        printf("不是小写字母");

    }

    return 0;

}

/*运行结果:请输入一个字符:b                                                                                                                                                                                                                                                                                            
小写字母 

*/