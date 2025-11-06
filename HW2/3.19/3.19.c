#include<stdio.h>
int main()
{
    double prin,rate,day;
    while(1)
    {
        printf("Enter loan principal (-1 to end): ");
        scanf("%lf",&prin);
        if(prin == -1) break;

        printf("Enter interest reta: ");
        scanf("%lf",&rate);
        printf("Enter term of the loan in days: ");
        scanf("%lf",&day);


        printf("The interest charge is $%.2f\n\n", prin * rate * day / 365);
    }


}
