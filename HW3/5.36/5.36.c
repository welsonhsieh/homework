#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
long long int tower(int);
int main()
{
    int n;
    printf("enter n = ");
    scanf("%d",&n);
    printf("the %d disks tower need %lld stap\n",n,tower(n));
}
long long int tower(int n)
{
    if(n==1) return 1;
    return 2*tower(n-1) + 1;
}
/*
f(1) = 1
f(2) = 2*f(1) + 1
f(3) = 2*f(2) + 1
*/

