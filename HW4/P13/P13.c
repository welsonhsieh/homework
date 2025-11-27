#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
void printArray(const int a[][3])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
int main()
{

    int array1[2][3]={{1,2,3},{4,5,6}};
    int array2[2][3]={1,2,3,4,5};
    int array3[2][3]={{1,2},{4}};

    printf("Value in array1 by row are: \n");
    printArray(array1);

    printf("Value in array2 by row are: \n");
    printArray(array2);

    printf("Value in array3 by row are: \n");
    printArray(array3);

    system("pause");
    return 0;
}
