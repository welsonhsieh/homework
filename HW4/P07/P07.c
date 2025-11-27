#include<stdio.h>
#include<stdlib.h>
#define SIZE 12

int main()
{

    int n[SIZE]={1,3,5,4,7,2,99,16,45,67,89,45};
    int total=0;

    printf("%s%13s\n","Element","Value");

    for(int i=0;i<SIZE;i++)
    {
        total += n[i];
        //printf("%7d%13d\n",i,n[i]);
    }

    printf("Total of array element values is %d\n",total);

    system("pause");
    return 0;
}
