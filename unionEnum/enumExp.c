/*

体验枚举：

定义枚举 enum Color { RED, GREEN, BLUE };

在 main 里声明 enum Color c = GREEN;

打印 c 的值（用 %d）。看看是不是 1。

*/

#include <stdio.h>

enum Color {

    RED,
    GREEN,
    BLUE

};

int main(void){

    enum Color c = GREEN;

    printf("%d\n", c);

    return 0;

}