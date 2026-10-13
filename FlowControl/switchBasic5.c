/*

练习 5：

c
#include <stdio.h>

int main(void)
{
    int a = 1;

    switch (a) {
        case 1:
            printf("1\n");
        case 2:
            printf("2\n");
        case 3:
            printf("3\n");
            break;
        default:
            printf("default\n");
    }

    return 0;
}
先判断输出，再编译运行，解释为什么输出这么多行。

判断输出:
1
2
3
因为忘写break了

*/

#include <stdio.h>

int main(void){

    int a = 1;

    switch (a){

        case 1:
            printf("1\n");
        case 2:
            printf("2\n");
        case 3:
            printf("3\n");
            break;
        default:
            printf("default\n");

    }

    return 0;

}

/*

编译结果：
1                                                                                                                                                                  
2                                                                                                                                                                  
3 

*/