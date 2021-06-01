#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[40];
    int length;

    printf("请输入您的名字：\n");
    scanf("%s", name);

    length = strlen(name);  //strlen()函数返回输入名字所占字节并保存到变量length中

    printf("\"%s\"", name);     //打印名字，包括双引号
    printf("\"%20s\"", name);   //字段宽度20，右端打印包括双引号
    printf("\"%-20s\"", name);  //字段宽度20，左端打印包括双引号
    printf("%*s",  length +3, name);    //字段宽度比名字长3个字节

    return 0;
}