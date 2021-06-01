#include <stdio.h>
#include <string.h>
int main(void)
{
    char f_name[20], l_name[20];
    int f_length, l_length;

    printf("Please enter your first name: \n");
    scanf("%s", f_name);
    printf("Please enter your last name: \n");
    scanf("%s", l_name);

    f_length = strlen(f_name);      /* 获取姓名所占字段长度 */
    l_length = strlen(l_name);

    printf("%s %s\n", f_name, l_name);
    printf("%*zd %*zd\n", f_length, f_length, l_length, l_length);
    printf("%s %s\n", f_name, l_name);
    printf("%-*zd %-*zd\n", f_length, f_length, l_length, l_length);       //使用*修饰符代替字段宽度

    return 0;

}