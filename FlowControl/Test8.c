/*

猴子吃桃（逆向思维 + while 循环）了。这是一道经典的逻辑题，写出来你就彻底通关流程控制了！

要求：
猴子第一天摘下若干个桃子，当即吃了一半，还不过瘾，又多吃了一个。第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第 10 天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少个桃子。

*/

#include <stdio.h>

int main(void){

    int leftNum = 1;
    int days = 10;

    while(days > 1){

        leftNum = (leftNum + 1)*2;
        days--;

    }

    printf("%d\n", leftNum);

}