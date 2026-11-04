#include <stdio.h>

int main(void){

    int a = 1;
    int b = 2;
    int t = 0;

    printf("交换前为:\n");
    printf("a=%d\tb=%d\n", a,b);

    /*
    
    交换部分代码
    
    */

   //第一版，最简单直白
    t = a;
    a = b;
    b = t;

   /*
   
   更加简洁的代码

   a = a+b;
   b = a-b;
   a = a-b;
   
   */

   printf("交换后为:\n");
   printf("a=%d\tb=%d\n", a,b);

   return 0;

}

/*

运行结果:
交换前为:
a=1     b=2
交换后为:
a=2     b=1

*/