#include <stdio.h>

int main(void){

    int a = 748;

    int unitsDigit = a % 10;
    int tensDigit = ((a / 10) % 10);
    int hundredsDigit = a / 100;
    /*
    
    分别提取三位数字
    
    */

   int b = 100*unitsDigit + 10*tensDigit + hundredsDigit;

   printf("%d\n", b);

   return 0;

}

/*

运行结果:
847

*/