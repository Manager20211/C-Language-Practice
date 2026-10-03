/*

练习 6 要求：

unsigned int u = 4294967295u;

先用 %u 输出一次

再用 %d 输出一次

观察两个结果，把你的观察写给我

*/

/*
数字后面加上u是表示unsigned类型的吗？Deepseek看到这一段的时候麻烦详细解释一下。并教我一下其他变量是否有类似的
*/
#include <stdio.h>

int main (void){

    unsigned int u = 4294967295u;

    printf("%u\n", u);
    printf("%d\n", u);
    
    return 0;


}

/*

运行结果：4294967295                                                                                                                                                                
-1  
发现：使用%d时因为溢出范围了，所以变成-1

*/