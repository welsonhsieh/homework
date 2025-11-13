#include<stdio.h>
#include<stdlib.h>

double power(double,int);

int main()
{
    int k;
    printf("計算3.5的k次方，請輸入k=");
    scanf("%d",&k);

    printf("3.5的%d次方=%f\n",k,power(3.5,k));
}
double power(double x,int y)
{
    if(y==1) return x;
    else return x*power(x,y-1);
}
