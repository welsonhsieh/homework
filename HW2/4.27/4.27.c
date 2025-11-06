#include<stdio.h>
#include<math.h>
int main()
{
    printf("side1\tside2\thypotenuse\n");
    for(int i=1;i<500;i++)
    {
        for(int j=i;j<500;j++)
        {
            double l = sqrt(i*i + j*j);
            if(l > 500) break;

            if((int)l == l) printf("%d\t%d\t%.0f\n",i,j,l);
        }
    }

}
