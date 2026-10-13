/*

练习 1
写一个程序：

int a = 12;（二进制 1100）

int b = 10;（二进制 1010）

分别输出 a & b、a | b、a ^ b、~a

用 %d 输出，同时用注释写出二进制结果

*/

#include <stdio.h>

int main(void){

    int a = 12;
    int b = 10;
                                        //二进制 十进制
    printf("a & b的结果是:%d\n", a&b);  //1000   8
    printf("a|b的结果是:%d\n", a | b);  //1110   14
    printf("a ^ b的结果是:%d\n", a^b);  //0110   6
    printf("~a的结果是:%d\n", ~a);      //0011   3

    return 0;

}

/*

编译结果a & b的结果是:8                                                                                                                                                    
a|b的结果是:14                                                                                                                                                     
a ^ b的结果是:6                                                                                                                                                    
~a的结果是:-13 

*/