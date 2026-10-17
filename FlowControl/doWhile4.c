/*

练习 4 要求：
写一个简单的密码验证系统：

预设密码是整数 1234。

用 do while 提示用户输入密码 scanf("%d", &password)。

如果输入错误，提示“密码错误，请重新输入”并继续循环。

如果输入正确，提示“登录成功”并退出循环。

*/

#include <stdio.h>

int main(void){

    int dePass = 1234;    //原本的变量名default是一个关键字
    int passWord;

    do{

        printf("请输入密码:");
        scanf("%d", &passWord);

        if(passWord != dePass){

            printf("密码错误，请重新输入\n");

        }

    } while(passWord != dePass);  //只要符合这个条件，就继续在do里面循环。所以这里不能写成while(passWord == deWord);

    printf("登录成功\n");

    return 0;

}

/*

运行结果:
请输入密码:0                                                                                                                                                                                                                                                                                         
密码错误，请重新输入                                                                                                                                                                                                                                                                                 
请输入密码:0                                                                                                                                                                                                                                                                                         
密码错误，请重新输入                                                                                                                                                                                                                                                                                 
请输入密码:1234                                                                                                                                                                                                                                                                                      
登录成功

*/