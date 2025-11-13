#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
int lcm(int,int);
int main()
{
    int x,y;

    printf("enter two integers: ");
    scanf("%d %d",&x,&y);

    printf("the lcm is: %d\n",lcm(x,y));
}
int lcm(int a,int b)
{
    int i=a,j=b;
    while(i!=j)
    {
        if(i>j) j+=b;
        if(i<j) i+=a;
    }
    return i;
}
