/*

练习 7 要求：

float f = 0.1f;

用 %.20f 输出

观察是否精确等于 0.1

*/
#include <stdio.h>

int main(void){

    float f = 0.1f;
    
    printf("%.20f", f);

    return 0;

}

/*

运行结果：0.10000000149011611938 
观察到不精确等于0.1

*/