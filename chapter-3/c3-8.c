/* 输入杯数，以品脱，盎司，汤勺，茶勺为单位显示等价容量 */
#include <stdio.h>
int main(void)
{
    float input_cup;

    printf("请输入杯数：");
    scanf("%f", &input_cup);
    printf("%f杯等于%f品脱。\n", input_cup, input_cup / 2.0);
    printf("****等于%f盎司。\n", input_cup * 8.0);     
    printf("****等于%f汤勺。\n", input_cup * 16.0);             
    printf("****等于%f茶勺。\n", input_cup * 48.0);   

    return 0;
}