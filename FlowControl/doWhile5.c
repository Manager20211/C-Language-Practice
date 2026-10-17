/*

练习 5 找错题：

c
#include <stdio.h>

int main(void)
{
    int i = 1;

    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5)

    return 0;
}
有什么问题？请修正并运行。做完发我。

while后面少分号了

*/

#include <stdio.h>

int main(void){

    int i = 1;
    do{

        printf("%d\n", i);
        i++;

    }while (i <= 5);

    return 0;

}

/*
运行结果
1                                                                                                                                                                                                                                                                                                    
2                                                                                                                                                                                                                                                                                                    
3                                                                                                                                                                                                                                                                                                    
4                                                                                                                                                                                                                                                                                                    
5


*/

