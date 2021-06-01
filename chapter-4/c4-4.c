#include <stdio.h>
int main(void)
{
    char name[20];
    float height;

    printf("请输入您的姓名：\n");
    scanf("%s", name);
    printf("请输入您的身高（厘米）：\n");
    scanf("%f", &height);
    printf("%s, you are %.3f meter tall.\n", name, height / 100.0);

    return 0;
}