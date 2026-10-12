/*

练习 6：

c
#include <stdio.h>

int main(void)
{
    int a = 5;
    int b = a++ + a++;

    printf("a = %d, b = %d\n", a, b);
    return 0;
}


先判断，再编译运行，看警告和结果，解释为什么是未定义行为。
*/

//判断 a++ + a++;是未定义行为

#include <stdio.h>

int main(void){

    int a = 5;
    int b = a++ + a++;

    printf("a = %d , b = %d\n", a , b);
    return 0;

}

/*
编译结果
PS D:\C\C-Language-Practice\CalculationSymbol> gcc -std=c11 -Wall -Wextra -g InDecrementTernary6.c -o InDecrementTernary6                                                                                                                                                                            
InDecrementTernary6.c: In function 'main':
InDecrementTernary6.c:28:20: warning: operation on 'a' may be undefined [-Wsequence-point]
   28 |     int b = a++ + a++;
      |                   ~^~
PS D:\C\C-Language-Practice\CalculationSymbol> ./InDecrementTernary6.exe                                                                                                                                                                                                                             
a = 7 , b = 11



*/