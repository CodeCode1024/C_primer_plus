#include <stdio.h>
int main(void)
{
    float speed, file, seconds;

    printf("请输入下载速度（单位Mb/s）：\n");
    scanf("%f", &speed);
    printf("请输入文件大小（单位MB）：\n");
    scanf("%f", &file);

    seconds = file / speed;     //计算下载时间

    printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, file);
    printf("downloads in %.2f seconds\n", seconds);

    return 0;
}