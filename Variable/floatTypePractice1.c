/*

练习 1
写一个程序，输出 float、double、long double 的 sizeof。

*/

#include <stdio.h>

int main(void){

    printf("The size of float is %zu\n", sizeof(float));
    printf("The size of double is %zu\n", sizeof(double));
    printf("The size of long double is %zu\n", sizeof(long double));

    return 0;

}

/*

运行结果：The size of float is 4                                                                                                                                                    
The size of double is 8                                                                                                                                                   
The size of long double is 16  

*/