/*

练习 7 要求：

用 while 输出 1 到 100 之间的所有偶数

每个数字一行

*/

#include <stdio.h>

int main(void){

    int initNum = 1;

    while (initNum <= 100){

        if(initNum % 2 == 0){

            printf("%d\n", initNum);
            initNum++;

        }
        else{

            initNum++;

        }

    }

    return 0;

}

/*

运行结果:
2
4
6
8
10
12
14
16
18
20
22
24
26
28
30
32
34
36
38
40
42
44
46
48
50
52
54
56
58
60
62
64
66
68
70
72
74
76
78
80
82
84
86
88                                                                                                                                                                 
90                                                                                                                                                                 
92                                                                                                                                                                 
94                                                                                                                                                                 
96                                                                                                                                                                 
98                                                                                                                                                                 
100

*/