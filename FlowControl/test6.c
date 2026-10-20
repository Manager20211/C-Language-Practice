/*

测试题 6：回文数判断 (考察 while + 数字反转)
要求：
输入一个整数，判断它是不是回文数。
回文数是指正着读和反着读都一样的数，例如 121、12321。
提示：利用 % 10 和 / 10，把原来的数字反转过来（比如 123 变成 321），然后和原数字比较是否相等。如果相等就是回文数。

*/
/*
#include <stdio.h>

int main(void){

    int userInputNum;
    int num;
    int digit = 0;
    int n = 1;
    int outputNum = 0;
    int numLeft = 0;

    scanf("%d", &userInputNum);

    num = userInputNum;

    //printf("%d", num);


    while(num / 10 != 0  || num % 10 != 0){

        digit++;
        num = num /10;

    }

   // printf("%d", digit);

    numLeft = userInputNum;


    while(digit>=1){

        for(int temp = digit-1; temp>=1; temp--){

            n *=10;

        }

        num =numLeft % 10;
        numLeft /= 10;
        outputNum += num*n;
        digit--;
        n=1;        

    }

    if(outputNum == userInputNum){

        printf("是回文数");

    }
    else{

        printf("不是回文数");

    }

    return 0;

}

*/


/*

标准写法

*/

#include <stdio.h>

int main(void){

    int userInputNum;
    int num;
    int reversed = 0;

    scanf("%d", &userInputNum);

    num = userInputNum;

    while(num != 0){

        reversed = reversed*10 + num % 10;     //按位进行操作
        num /= 10;

    }

    if(reversed == userInputNum){

        printf("是回文数");

    }
    else{

        printf("不是回文数");

    }

    return 0;

}