#include<stdio.h>
int main()
{
    double kg,m,bmi;
    printf("your weight(kg): ");
    scanf("%lf",&kg);
    printf("your height(m): ",&m);
    scanf("%lf",&m);

    bmi=kg/m/m;

    printf("your BMI: %f\n\n",bmi);
    printf("BMI VALUES\n");
    printf("Underweight: less then 18.5\n",bmi);
    printf("Normal:      between 18.5 and 24.9\n");
    printf("Overweight:  between 25 and 29.9\n");
    printf("Obese:       30 or greater\n");
}
