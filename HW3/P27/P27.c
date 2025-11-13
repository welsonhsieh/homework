#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
long f(int);

int main()
{

    for(int i=0;i<=10;i++)
    {
        printf("%2d! = %d\n",i,f(i));
    }
}
long f(int k)
{
    if(k==0) return 1;
    else return k*f(k-1);
}
