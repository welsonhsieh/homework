#include<stdio.h>
int main()
{
    double sale,salary;
    while(1)
    {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%lf",&sale);
        if(sale == -1) break;

        salary = sale*0.09+200;
        printf("Salary is: $%.2f\n\n",salary);
    }


}
