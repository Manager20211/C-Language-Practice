/*

练习 3：字符串拼接与比较 (ex7StringOps.c)
要求：

定义两个字符数组：
char str1[50] = "Hello"; （注意这里给个大一点的容量 50，因为后面要拼接）
char str2[] = " World";

用 strcat(str1, str2); 把 str2 拼到 str1 后面，然后打印 str1。

定义两个字符串：
char pass1[] = "1234";
char pass2[] = "1234";

用 if (strcmp(pass1, pass2) == 0) 来判断它俩是否相等。如果相等打印“密码一致”，否则打印“密码不一致”。

*/

#include <stdio.h>
#include <string.h>

int main(void){

    int i = 0;

    char str1[50] = "Hello";
    char str2[] = "World";

    strcat(str1, str2);

    while (str1[i] != '\0'){

        printf("%c", str1[i]);
        i++;

    }

    printf("\n");

    char pass1[] = "1234";
    char pass2[] = "1234";

    if(strcmp(pass1, pass2) == 0){

        printf("密码一致\n");

    }
    else{

        printf("密码不一致\n");

    }

    return 0;

}