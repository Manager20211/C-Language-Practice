/*

练习 1
写一个程序：

输入两个整数 a 和 b

分别输出：

a == b

a != b

a > b

a < b

a >= b

a <= b

每个输出一行，例如：

text
a == b: 0
a != b: 1
...

*/

#include <stdio.h>

int main(void){

    int a;
    int b;

    printf("请输入一个整数a:");
    scanf("%d", &a);

    printf("请再输入一个整数b:");
    scanf("%d", &b);

    printf("a==b的结果是%d\n", a == b);
    printf("a!=b的结果是%d\n", a != b);
    printf("a>b的结果是%d\n", a > b);
    printf("a<b的结果是%d\n", a < b);
    printf("a>=b的结果是%d\n", a >= b);
    printf("a<=b的结果是%d\n", a <= b);

    return 0;

}

/*

运行结果是请输入一个整数a:3                                                                                                                                                                                                                                                                                           
请再输入一个整数b:8                                                                                                                                                                                                                                                                                         
a==b的结果是0                                                                                                                                                                                                                                                                                               
a!=b的结果是1                                                                                                                                                                                                                                                                                               
a>b的结果是0                                                                                                                                                                                                                                                                                                
a<b的结果是1                                                                                                                                                                                                                                                                                                
a>=b的结果是0                                                                                                                                                                                                                                                                                               
a<=b的结果是1 

*/