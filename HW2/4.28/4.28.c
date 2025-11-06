#include<stdio.h>
#include<math.h>
void managers()
{
    double salary;
    printf("\nmanagers--------------------------------------------");
    while(1)
    {
        printf("\nEnter salary (-1 to end): ");
        scanf("%lf",&salary);
        if(salary == -1) break;
        printf("Salary is : %.2f\n",salary);
    }
}
void bourly_workers()
{
    int hour;
    double rate,salary;
    printf("\nbourly workers--------------------------------------");
    while(1)
    {
        printf("\nEnter # of hours worked (-1 to end): ");
        scanf("%d",&hour);
        if(hour == -1) break;

        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf",&rate);

        printf("Salary is $%.2f\n", hour>40? 40*rate + (hour-40)*rate*1.5 : hour*rate);
    }
}
void com_mission_workers()
{
    double sale,salary;
    printf("\ncom-mission workers---------------------------------");
    while(1)
    {
        printf("\nEnter sales in dollars (-1 to end): ");
        scanf("%lf",&sale);
        if(sale == -1) break;

        salary = sale*0.057+250;
        printf("Salary is: $%.2f\n",salary);
    }
}
void pieceworkers()
{
    double item,price;
    printf("\npieceworkers----------------------------------------");
    while(1)
    {
        printf("\nEnter quantity of item (-1 to end): ");
        scanf("%lf",&item);
        if(item == -1) break;

        printf("Enter price of item: ");
        scanf("%lf",&price);
        printf("Salary is : %.2f\n",item*price);
    }
}
int main()
{
    int code;
    while(1)
    {
        printf("\nchoose the code (-1 to end): ");
        scanf("%d",&code);
        if(code == -1) break;
        switch(code)
        {
            case 1:
                managers();
                printf("----------------------------------------------------\n");
                break;
            case 2:
                bourly_workers();
                printf("----------------------------------------------------\n");
                break;
            case 3:
                com_mission_workers();
                printf("----------------------------------------------------\n");
                break;
            case 4:
                pieceworkers();
                printf("----------------------------------------------------\n");
                break;
        }
    }
}
