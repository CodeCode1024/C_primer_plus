//输入身高（/英寸），输出身高（/厘米）

#include <stdio.h>
int main(void)
{
    float input_height, output_height;
    float scale = 2.54;
    
    printf("请输入你的身高（英寸）：");
    scanf("%f", &input_height);

    output_height = input_height * scale;       //将英寸换算为厘米

    printf("你的身高应为%f厘米\n"， output_height);

    return 0;
}