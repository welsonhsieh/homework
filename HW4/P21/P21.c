#include<stdio.h>
#include<stdlib.h>
void automaticArrayInit()
{
    int array2[3]={1,2,3};

    printf("\nValues on entering automaticArrayInit:\n");

    for(int i=0;i<3;i++)
        printf("array2[%d] = %d  ",i,array2[i]);

    printf("\nValues on entering automaticArrayInit:\n");

    for(int i=0;i<3;i++)
        printf("array2[%d] = %d  ",i,array2[i]+=5);
}
void staticArrayInit()
{
    static int array1[3];
    printf("\nValues on entering staticArrayInit:\n");

    for(int i=0;i<3;i++)
        printf("array1[%d] = %d  ",i,array1[i]);

    printf("\nValues on entering staticArrayInit:\n");

    for(int i=0;i<3;i++)
        printf("array1[%d] = %d  ",i,array1[i]+=5);
}
int main()
{
    printf("First call to each function:\n");
    staticArrayInit();
    automaticArrayInit();

    printf("\n\nSceond call to each function:\n");
    staticArrayInit();
    automaticArrayInit();
    printf("\n");
    system("pause");
    return 0;
}
