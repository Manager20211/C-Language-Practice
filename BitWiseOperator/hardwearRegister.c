/*

继续练习 2：模拟单片机寄存器 (ex2HardwareRegister.c)
这道题直接模拟你未来在物联网硬件上写代码的真实场景。单片机的寄存器就是一个个 8 位的二进制盒子。

要求：

定义一个 8 位无符号变量模拟寄存器：unsigned char reg = 0x00; （即全是 0）。

置位：把第 3 位和第 5 位变成 1。
提示：用 reg |= (1 << 3); 和 reg |= (1 << 5);

打印当前的 reg 值。用 %x 打印十六进制，看看是多少。

清位：把第 3 位重新变回 0（保持第 5 位依然是 1）。
提示：用 reg &= ~(1 << 3);

再次打印 reg 的值。

*/

#include <stdio.h>

int main(void){

    unsigned char reg = 0x00;

    reg |= (1<<3);
    reg |= (1<<5);

    printf("%x\n", reg);

    reg ^= (1<<3);

    printf("%x\n", reg);

    return 0;

}

/*

运行结果:
28                                                                                                                                                                                                                                                                                                   
20 

没看过你的提示

*/