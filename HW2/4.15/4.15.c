#include<stdio.h>
int main()
{
    for(int i=0; i<5; i++)
    {
        double total=5000,rate;
        for(int j=0; j<15; j++)
        {
            total *= 1.10 + 0.005*i;
        }
        rate = 10 + 0.5*i;
        printf("%.1f%% : %f\n",rate,total);
    }
}
