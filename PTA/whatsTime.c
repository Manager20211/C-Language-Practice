/*

7-2 然后是几点
分数 15
作者 翁恺
单位 浙江大学
有时候人们用四位数字表示一个时间，比如 1106 表示 11 点零 6 分。现在，你的程序要根据起始时间和流逝的时间计算出终止时间。

读入两个数字，第一个数字以这样的四位数字表示当前时间，第二个数字表示分钟数，计算当前时间经过那么多分钟后是几点，结果也表示为四位数字。当小时为个位数时，没有前导的零，例如 5 点 30 分表示为 530；0 点 30 分表示为 030。注意，第二个数字表示的分钟数可能超过 60，也可能是负数。

输入格式：
输入在一行中给出 2 个整数，分别是四位数字表示的起始时间、以及流逝的分钟数，其间以空格分隔。注意：在起始时间中，当小时为个位数时，没有前导的零，即 5 点 30 分表示为 530；0 点 30 分表示为 030。流逝的分钟数可能超过 60，也可能是负数。

输出格式：
输出不多于四位数字表示的终止时间，当小时为个位数时，没有前导的零。题目保证起始时间和终止时间在同一天内。

输入样例：
1120 110
输出样例：
1310
鸣谢燕山大学穆运峰老师、用户任钰补充数据！

*/

#include <stdio.h>

int main(void){

    int userInputTime;
    int hour;
    int minute;
    int passedTime;
    int totalMinute;
    int totalLeftMinute;
    int leftHour;
    int leftMinute;
    
    char space;

    scanf("%d%c%d", &userInputTime,&space,&passedTime);

    hour = userInputTime / 100;
    minute = userInputTime % 100;

    totalMinute = 60 * hour + minute;

    
    totalLeftMinute = totalMinute + passedTime;

    leftHour = totalLeftMinute / 60;
    leftMinute = totalLeftMinute % 60;

    printf("%d%d", leftHour,leftMinute);

}