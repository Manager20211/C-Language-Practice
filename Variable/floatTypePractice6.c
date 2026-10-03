/*

练习 6 要求：

用 scanf 读入一个 float

用 scanf 读入一个 double

分别输出它们，保留 2 位小数

提示：scanf 读 float 用 %f，读 double 用 %lf。

*/

#include <stdio.h>

int main(void){

    float userInputFloat;
    //scanf("请输入一个float:%f\n", userInputFloat);  错误代码，scanf不需要加提示词，也不能加，同时等待复制的变量前面要加上&
    printf("请输入一个float:\n");
    scanf("%f", &userInputFloat);

    double userInputDouble;
    //scanf("请输入一个double:%lf\n", userInputDouble); 同理
    printf("请输入一个double:\n");
    scanf("%lf", &userInputDouble);

    printf("你输入的float是:%.2f\n", userInputFloat);
    printf("你输入的double是:%.2f\n", userInputDouble);

    return 0;


}

/*

运行结果：请输入一个float:                                                                                                                                                          
3.14                                                                                                                                                                      
请输入一个double:                                                                                                                                                         
3.1415926                                                                                                                                                                 
你输入的float是:3.14                                                                                                                                                      
你输入的double是:3.14

*/