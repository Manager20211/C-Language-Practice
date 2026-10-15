/*

练习 2 要求：

用 while 求 1 到 100 的和

输出结果

*/

#include <stdio.h>

int main(void){

    int counter = 1;
    int sum = 0;

    while(counter <= 100){

        sum += counter;
        counter++;

    }

    printf("1加到100的和为:%d\n", sum);

    return 0;

}

/*

运行结果
1加到100的和为:5050   

*/