/*

练习 8 要求：

用 switch 和 if / else if 分别写一个程序，判断一个分数（0~100）的等级：

90~100：优秀

80~89：良好

60~79：及格

0~59：不及格

然后用注释说明：这种题更适合用 switch 还是 if / else if？为什么？

*/

#include <stdio.h>

int main(void){

    double userInputGrade;

    printf("请输入一个0~100的分数:");
    scanf("%lf", &userInputGrade);

    if (userInputGrade >= 90.0 && userInputGrade <= 100.0){

        printf("优秀\n");

    }
    else if( userInputGrade >= 80.0){

        printf("良好\n");

    }
    else if( userInputGrade >= 60.0){

        printf("及格\n");

    }
    else if( userInputGrade >= 0.0){

        printf("不及格\n");
        
    }
    else{

        printf("Invalid Input\n");

    }

    return 0;

}

/*

请输入一个0~100的分数:89.5                                                                                                                                         
良好 

我不想去用switch去写，用switch去表示范围的东西还需要枚举，太麻烦了

*/