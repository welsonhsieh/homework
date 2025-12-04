#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(0));

    int a,b;
    int x[11] = {0};

    for(int i=0;i<36000;i++)
    {
        a=rand()%6+1;
        b=rand()%6+1;

        x[a+b-2]+=1;
    }

    for(int i=0;i<11;i++)
    {
        printf("%2d: %d\n",i+2,x[i]);
    }



}
