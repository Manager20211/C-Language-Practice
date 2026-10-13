/*

练习 3 要求：

输入一个分数（0~100）

按下面规则输出等级：

90~100：优秀

80~89：良好

60~79：及格

0~59：不及格

用 if / else if / else

*/

#include <stdio.h>

int main(void){

    double userInputGrade;

    printf("请输入一个分数:");
    scanf("%lf", &userInputGrade);
    //  printf("%.1f\n", userInputGrade);   出错了，测试代码

    if(userInputGrade <= 100.0 && userInputGrade >= 90.0){

        printf("优秀\n");

    }
    else if(userInputGrade >= 80.0 && userInputGrade < 90.0){

        printf("良好\n");

    }
    else if(userInputGrade >= 60.0 && userInputGrade < 80.0){

        printf("及格\n");

    }
    else{

        printf("不及格\n");

    }

    return 0;

}

/*

运行结果
请输入一个分数:89.5                                                                                                                                                
良好 
*/