#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
long power(int,int);
int main()
{
    int x,y;

    printf("enter base: ");
    scanf("%d",&x);
    printf("enter exponent: ");
    scanf("%d",&y);
    printf("the power is: %ld\n",power(x,y));
}
long power(int a,int b)
{
    if(b==0) return 1;
    return a * power(a,b-1);
}
