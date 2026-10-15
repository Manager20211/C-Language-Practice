/*

练习 4 要求：

不断输入整数，直到输入 0 为止

输出所有输入数字的和

提示：用 while 和 scanf

例如输入 3 5 2 0，输出 10

*/

#include <stdio.h>

int main(void){

    int userInputNum;
    int sum = 0;

    printf("请持续输入整数,直到输入的整数为0:");

    scanf("%d", &userInputNum);

    while (userInputNum != 0){

        printf("请继续输入:");
        sum += userInputNum;
        scanf("%d", &userInputNum);

    }

    printf("最终的结果是:%d\n", sum);
    
    return 0;

}

/*

运行结果

请继续输入:5                                                                                                                                                       
请继续输入:2                                                                                                                                                       
请继续输入:0                                                                                                                                                       
最终的结果是:10 


*/