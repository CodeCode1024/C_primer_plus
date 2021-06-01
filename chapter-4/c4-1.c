/*提示用户输入名和姓，然后以”名，姓“的格式打印*/
#include <stdio.h>
int main(void)
{
    char f_name[20], l_name[20];

    printf("请输入您的名字：\n");
    scanf("%s", l_name);
    printf("请输入您的姓氏：\n");
    scanf("%s", f_name);
    printf("您好，%s,%s", l_name, f_name);

    return 0;
}