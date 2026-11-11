#include <stdio.h>

int main(void){

    int firstNum;
    int secondNum;
    int tempNumA;
    int tempNumB;
    int remainder;
    int greatestCommonDivisor;
    int leastCommonMultiple;

    scanf("%d %d", &firstNum, &secondNum);

    tempNumA = firstNum;
    tempNumB = secondNum;

    while(tempNumB != 0){

        remainder = tempNumA % tempNumB;
        tempNumA = tempNumB;
        tempNumB = remainder;

    }

    greatestCommonDivisor = tempNumA;

    leastCommonMultiple = (firstNum / greatestCommonDivisor) * secondNum;

    printf("最大公约数为%d\n", greatestCommonDivisor);
    printf("最小公倍数为%d\n", leastCommonMultiple);

    return 0;

}