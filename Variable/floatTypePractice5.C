/*

练习 5 要求：

int a = 5;

int b = 2;

输出 a / b

输出 (double)a / b

输出 a / 2.0

观察三者区别

*/

#include <stdio.h>

int main(void){

    int a = 5;
    int b = 2;
    printf("%d\n", a/b);
    printf("%f\n", (double)a/b);
    printf("%f\n", a/2.0);

    return 0;

}

/*
运行结果：
2                                                                                                                                                                         
2.500000                                                                                                                                                                  
2.500000 
顺便问一下，double类型如果想要跟准确的输出（double不是小数15位还是16位是准的吗？），该用什么specifier代替%f？

*/

/*

解答：想看到 double 的完整精度，用这些
1. %.17g：通用格式，17 位有效数字
c
printf("%.17g\n", d);
g 会根据数值大小自动选择定点或科学计数法，17 是有效数字位数。

17 位是 double 能保证“往返转换不丢”的位数。
也就是说，用 %.17g 打印，再 scanf 读回来，能还原原来的 double。

2. %.17e：科学计数法，17 位有效数字
c
printf("%.17e\n", d);
适合看非常大或非常小的数。

3. %a：十六进制浮点，完全精确
c
printf("%a\n", d);
%a 输出的是浮点数的精确二进制表示，用十六进制写。
这是唯一能百分之百精确还原 double 的格式。

例如：

c
double d = 0.1;
printf("%a\n", d);
输出类似：

text
0x1.999999999999ap-4
这个值读回去，和原来的 0.1 完全一样。

*/