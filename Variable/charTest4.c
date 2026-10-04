/*

练习 4 要求：

输出下面转义字符的效果：

text
Hello	World
He said: "Hi"
Path: C:\Users\test

*/

#include <stdio.h>

int main(void){

    printf("Hello\tWorld\n");
    printf("He said:\"Hi\"\n");
    printf("Path: C:\\Users\\test\n");

    return 0;

}

/*

运行结果
Hello   World                                                                                                                                                             
He said:"Hi"                                                                                                                                                              
Path: C:\Users\test

*/