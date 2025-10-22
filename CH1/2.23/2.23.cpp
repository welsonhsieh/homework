#include<stdio.h>
int main()
{
    int a,b,c,k;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b) {k=a,a=b,b=k;}
    if(b>c) {k=b,b=c,c=k;}
    if(a>b) {k=a,a=b,b=k;}

    printf("largest: %d\n",c);
    printf("smallest: %d\n",a);


}
