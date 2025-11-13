#include<stdio.h>
#include<stdlib.h>

int maximun(int,int,int);

int main()
{
    int a,b,c;
    printf("輸入三個數:\n");
    scanf("%d %d %d",&a,&b,&c);

    printf("最大的數是%d\n",maximun(a,b,c));
}
int maximun(int x,int y,int z)
{
    if(y>x) x=y;
    if(z>x) x=z;
    return x;
}
