#include <stdio.h>
#define LI_PER_GALLON 3.785
#define KM_PER_MILE 1.609
#define KM 100.0 
int main(void)
{
    float mileage, gas, mile_gallon, liter_100KM;

    printf("请输入行驶的里程(英里）：\n")；
    scnaf("%f", &mileage);
    printf("请输入消耗的汽油量（加仑）：\n")；
    scanf("%f", &gas);

    mile_gallon = mileage / gas;    //计算每加仑可以行驶多少英里
    //liter_100KM = mile_gallon * LI_PER_GALLON * KM / KM_PER_MILE;   
    liter_100KM = ( LI_RER_GALLON * gas ) / ( KM_PER_MILE * mileage ) * KM //计算每百公里消耗多少升
    printf("%.1f", mile_gallon);
    printf("%.1f", liter_100KM);

    return 0;
}