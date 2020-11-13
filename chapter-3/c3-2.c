/* 要求提示输入一个ASCII码值（如66），然后打印输入的字符 */

#include <stdio.h>
int main(void)
{
    int input_asc;

    printf("请输入字符ASCII码值（0~127）：");
    scanf("%d", &input_asc);
    printf("ASCII码：%d对应字符为：%c\n", input_asc, input_asc);

    return 0;
}