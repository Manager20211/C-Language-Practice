/*

练习 4 要求：

输入一个整数

用三目运算符判断奇偶

输出 偶数 或 奇数

*/

#include <stdio.h>

int main(void){

    int num;
    // 第一遍的变量 int resultBool;

    printf("请输入一个整数:");
    scanf("%d", &num);

    /*第一遍的写法，感觉有点脱裤子放屁
    resultBool = (num % 2 == 0) ? 1 : 0;
    
    if(resultBool == 1){

        printf("偶数\n");

    }
    else{

        printf("奇数\n");

    }
    */

    /*第二遍还是脱裤子放屁
    if((num % 2 == 0) ? 1 : 0){

        printf("偶数\n");

    }
    else{

        printf("奇数\n");

    }
    */

    printf("%s\n", (num % 2 == 0) ? "偶数" : "奇数");

    return 0;
    

}

/*

运行结果:
请输入一个整数:2                                                                                                                                                                                                                                                                                            
偶数 


*/