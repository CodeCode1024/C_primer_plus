//输入水的夸脱数，输出水分子的数量
//1个水分子质量约为3.0*10^-23克，1夸脱水大约950克

#include <stdio.h>
int main(void)
{
    double h2o = 3.0E-23;
    double g = 950;
    double input_quart, output_h2o;  

    printf("请输入水的夸脱数：");
    scanf("%lf", &input_quart);

    output_h2o = input_quart * g / h2o;     //计算水分子数量

    printf("%lf夸脱的水中含有%e个水分子。\n", input_quart, output_h2o);
    
    return 0;
}