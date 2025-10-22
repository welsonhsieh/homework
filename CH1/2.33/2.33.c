#include<stdio.h>
int main()
{
    double miles,gas,miles_gallon,parking,tolls;
    printf("Total miles driven per day: ");
    scanf("%lf",&miles);
    printf("Cost per gallon of gasoline: ");
    scanf("%lf",&gas);
    printf("Average miles per gallon: ");
    scanf("%lf",&miles_gallon);
    printf("Parking fees per day: ");
    scanf("%lf",&parking);
    printf("Tolls per day: ");
    scanf("%lf",&tolls);

    printf("Total cost: %f",miles/miles_gallon*gas+parking+tolls);
}
