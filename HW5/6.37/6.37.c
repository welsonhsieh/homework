#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int recursiveMaximum(int x[],int SIZE)
{
    if(SIZE == 1) return x[0];
    for(int i=1;i<SIZE;i++)
    {
        if(x[i-1] > x[i])
        {
            int k=x[i-1];
            x[i-1] = x[i];
            x[i] = k;
        }
    }
    return x[SIZE-1];
}
int main()
{
    int x[5];
    for(int i=0;i<5;i++) scanf("%d",&x[i]);

    printf("Maximun: %d\n",recursiveMaximum(x,5));

    system("pause");
}
