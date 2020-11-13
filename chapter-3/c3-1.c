/* 试验编写程序，观察系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况 */
#include <stdio.h>
int main(void)
{
    int a = 2147483647;
    float b = 5.1e38;
    float c = 1.1e-10;

    printf("整数%d上溢：%d\n", a, a + 2)；
    printf("浮点数%e上溢：%e", b , b * 100);
    printf("浮点数%e下溢：%e", c, c / 100);

    return 0;
}