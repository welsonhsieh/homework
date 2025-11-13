#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
char f(char);

int main()
{
    char s;

    printf("enter an alphabet: ");
    scanf("%c",&s);

    printf("%c\n",f(s));
}
char f(char s)
{
    int k;
    k = s;
    //printf("%d\n",k);
    if(k>=97 && k<=122) k-=32;
    else if(k>=65 && k<=90)  k+=32;
    //printf("%d\n",k);
    s = k;
    return s;
}
