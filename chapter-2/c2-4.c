/*调用两个自定义函数jolly()和deny()*/
#include <stdio.h>
void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    deny();

    return 0;
}

void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("Which nobody can deny!\n");
}