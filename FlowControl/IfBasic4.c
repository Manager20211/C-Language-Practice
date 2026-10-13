/*

练习 4 要求：

输入三个整数

输出最大值

用 if / else if / else

不要用三目运算符

*/

#include <stdio.h>

int main (void){

    int firstNum;
    int secondNum;
    int thirdNum;

    printf("请输入第一个整数:");
    scanf("%d", &firstNum);

    printf("请输入第二个整数:");
    scanf("%d", &secondNum);

    printf("请输入第三个整数:");
    scanf("%d", &thirdNum);

    //比较扎实(呆板)的写法
    if(firstNum >= secondNum && firstNum >= thirdNum){

        printf("最大值为:%d\n", firstNum);

    }
    else if(secondNum >= firstNum && secondNum >= thirdNum){

        printf("最大值为:%d\n", secondNum);

    }
    else{

        printf("最大值为：%d\n", thirdNum);

    }

    //更灵活的写法 可以拓展到更多数

    int max = firstNum;

    if(max <= secondNum){

        max = secondNum;

    }
    if(max <= thirdNum){

        printf("最大值是:%d\n", thirdNum);

    }
    else{

        printf("最大值是:%d\n", max);  //这里的max简直是点睛之笔，我简直是爱因斯坦

    }

    return 0;

}

/*

运行结果:
请输入第一个整数:9                                                                                                                                                 
请输入第二个整数:8                                                                                                                                                 
请输入第三个整数:5                                                                                                                                                 
最大值为:9  


*/