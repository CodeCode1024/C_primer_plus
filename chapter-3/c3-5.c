//提示用户输入年龄，然后显示该年龄对应的秒数
//一年大约3.156*10^7秒

#include <stdio.h>
int main(void)
{
    unsigned long years;
    unsigned long seconds = 31560000;

    printf("请输入你的年龄：");
    scanf("%ld", &years);
    printf("你的年龄对应的秒数为：%d", years * seconds);

    return 0;
}