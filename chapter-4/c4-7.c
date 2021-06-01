#include <stdio.h>
#include <float.h>
#define ONE 1.0
#define THREE 3.0
int main(void)
{
    double a = ONE / THREE;
    float b = ONE / THREE;

    printf("the double value is %.6f\n", a);
    printf("the double value is %.12f\n", a);
    printf("the double value is %.16f\n", a);
    printf("the float value is %.6f\n", b);
    printf("the float value is %.12f\n", b);
    printf("the float value is %.16f\n", b);
    printf("the DBL_DIG value is %f\n", DBL_DIG);
    printf("the FLT_DIG value is %f\n", FLT_DIG);

    return 0;


}