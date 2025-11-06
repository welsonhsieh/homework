#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x%y==0 && x>=y) printf("the frist is a multiple of the second\n");
    else printf("the frist isn't a multiple of the second\n");
}
