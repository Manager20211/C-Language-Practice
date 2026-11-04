#include <stdio.h>

int main (void){

    int gradeOne;
    int gradeTwo;
    int gradeThree;

    printf("请输入三个同学的成绩:\n");
    scanf("%d%d%d", &gradeOne,&gradeTwo,&gradeThree);

    int sum = gradeOne+gradeTwo+gradeThree;

    double level = (double)sum / 3;

    printf("总成绩=%d,平均成绩=%.2f\n", sum,level);

    return 0;

}

/*

运行结果:
请输入三个同学的成绩:
65 70 85
总成绩=220,平均成绩=73.33

*/