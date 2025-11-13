#include<stdio.h>
#include<stdlib.h>

int square(int y);

int main()
{

    for(int i=1; i<=10; i++)
    {
        printf("%d ",square(i));
    }
    printf("\n");
}
int square(int y)
{
    return y*y;
}
