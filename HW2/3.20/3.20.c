#include<stdio.h>
int main()
{
    int hour;
    double rate,salary;
    while(1)
    {
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d",&hour);
        if(hour == -1) break;

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf",&rate);

        printf("Salary is $%.2f\n\n", hour>40? 40*rate + (hour-40)*rate*1.5 : hour*rate);
    }


}
