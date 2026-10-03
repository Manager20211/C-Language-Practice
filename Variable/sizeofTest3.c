#include <stdio.h>

int main(void){
    
    int a = 10;
    printf("The size of a is %zu\n", sizeof (a));  //虽然还没有开始编译，但是我盲猜结果会显示变量a所属类型的size，比如说这里的a是Int，那么等一下就会显示Int的size
    printf("The size of int is %zu\n", sizeof (int));
    return 0;

}