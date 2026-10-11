/*

练习 6：

c
#include <stdio.h>

int main(void)
{
    int a = 5;

    if (a = 0) {
        printf("真\n");
    } else {
        printf("假\n");
    }

    return 0;
}
先判断，再编译运行，看警告。

*/

//判断结果是假

#include <stdio.h>

int main(void){

    int a = 5;

    if (a = 0){

        printf("真\n");

    }
    else{

        printf("假\n");

    }

    return 0;

}

/*

运行结果:
PS D:\C\C-Language-Practice\CalculationSymbol> gcc -std=c11 -Wall -Wextra -g RelationSymbol6.c -o RelationSymbol6                                                                                                                                                                                           
RelationSymbol6.c: In function 'main':
RelationSymbol6.c:32:9: warning: suggest parentheses around assignment used as truth value [-Wparentheses]
   32 |     if (a = 0){
      |         ^
PS D:\C\C-Language-Practice\CalculationSymbol> ./RelationSymbol6.exe                                                                                                                                                                                                                                        
鍋?    

乱码了？

*/