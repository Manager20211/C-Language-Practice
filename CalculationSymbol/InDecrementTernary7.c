/*

练习 7 要求：

用 for 循环输出 1 到 10，分别用 i++ 和 ++i 写一遍，观察输出是否一样，解释为什么在 for 循环里没区别。

提示：

c
for (int i = 1; i <= 10; i++) {
    printf("%d\n", i);
}
然后改成：

c
for (int i = 1; i <= 10; ++i) {
    printf("%d\n", i);
}

*/

#include <stdio.h>

int main (void){

    for (int i = 1; i <= 10; ++i) {

        printf("%d\n", i);

    }  

    return 0;

}

/*

i++结果
1                                                                                                                                                                                                                                                                                                    
2                                                                                                                                                                                                                                                                                                    
3                                                                                                                                                                                                                                                                                                    
4                                                                                                                                                                                                                                                                                                    
5                                                                                                                                                                                                                                                                                                    
6                                                                                                                                                                                                                                                                                                    
7                                                                                                                                                                                                                                                                                                    
8                                                                                                                                                                                                                                                                                                    
9                                                                                                                                                                                                                                                                                                    
10

*/

/*

++i结果
1                                                                                                                                                                                                                                                                                                    
2                                                                                                                                                                                                                                                                                                    
3                                                                                                                                                                                                                                                                                                    
4                                                                                                                                                                                                                                                                                                    
5                                                                                                                                                                                                                                                                                                    
6                                                                                                                                                                                                                                                                                                    
7                                                                                                                                                                                                                                                                                                    
8                                                                                                                                                                                                                                                                                                    
9                                                                                                                                                                                                                                                                                                    
10  

*/

//二者结果一致 因为i++和++i这个行为都是在printf语段执行掉之后进行的？