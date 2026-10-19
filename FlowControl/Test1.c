/*

测试题 1：水仙花数 (考察 for 循环 + 取余除法)
要求：
输出 100 到 999 之间所有的“水仙花数”。
提示：水仙花数是指一个 3 位数，其各位数字的立方和等于该数本身。
例如：153 是一个水仙花数，因为 


*/

#include <stdio.h>

int main(void){

    int unitsDigit;
    int tensDigit;
    int hundredsDigit;
    int result;

    for (int i = 100; i <= 999; i++){

        unitsDigit = i % 10;
        tensDigit = (i % 100 - unitsDigit) / 10;
        hundredsDigit = i / 100;
        result = unitsDigit*unitsDigit*unitsDigit + tensDigit*tensDigit*tensDigit + hundredsDigit*hundredsDigit*hundredsDigit;


        
        if(i == result){

            printf("%d\n", i);

        }

    }

    return 0;

}

/*

运行结果:
153                                                                                                                                                                
370                                                                                                                                                                
371                                                                                                                                                                
407

*/