//读取一个浮点数，先打印成小数点形式，再打印成指数形式
//如果系统支持，再打印成p计数法

#include <stdio.h>
int main(void)
{
    float input;
    printf("Enter a floating-point value: ");
    scanf("%f", &input);
    printf("fixed-point notation: %f\n", input);
    printf("exponential notation: %e\n", input);
    printf("p notation: %p\n", input);

    return 0;
}