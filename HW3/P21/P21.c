#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


int main()
{
    unsigned seed;
    printf("Enter seed:");
    scanf("%d",&seed);

    srand(seed);

    for(int i=0;i<5;i++)
    {
        printf("%d ",1+rand()%6);
    }
    printf("\n");
}
