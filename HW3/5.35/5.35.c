#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
unsigned long long int fibonacci(unsigned int);
int main()
{
    int n;
    printf("enter n = ");
    scanf("%d",&n);
    printf("the %dth fibonacci is: %lld\n",n,fibonacci(n));
}
unsigned long long int fibonacci(unsigned int n)
{
    unsigned long long int f[n];
    f[0]=0,f[1]=1;
    for(int i=2;i<n;i++)
    {
        f[i] = f[i-1] + f[i-2];
    }
    return f[n-1];
}
