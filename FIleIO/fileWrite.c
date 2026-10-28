/*

要求（纯自己写，不给模板）：

声明一个文件指针 FILE *fp;。

用 fopen 以写入模式（"w"）打开一个名为 student.txt 的文件。

做一个安全检查：如果 fp == NULL，说明打开失败，打印“文件打开失败”，并 return 1;。

用 fprintf 往文件里写入两行内容：

第一行：Hohai University

第二行：IoT Engineering

用 fclose 关闭文件。

运行程序。

验证成果：运行结束后，不要看屏幕（屏幕上啥也没有），去你代码所在的文件夹里找找，是不是多了一个 student.txt？点开它，看看里面的字是不是写进去了。

*/

#include <stdio.h>

int main(void){

    FILE *fp;
    fp = fopen("student.txt", "w");
    if(fp == NULL){

        printf("文件打开失败\n");

        return 1;

    }

    fprintf(fp, "Hohai University\n");
    fprintf(fp, "IOT Engineering\n");

    fclose(fp);

    return 0;

}

/*

运行成功，写进去了

*/