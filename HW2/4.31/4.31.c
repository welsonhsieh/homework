#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=4-i;j>=1;j--) printf("%s"," ");
        for(int j=1;j<=i*2+1;j++) printf("%s","*");
        for(int j=4-i;j>=1;j--) printf("%s"," ");

        printf("\n");
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=i;j++) printf("%s"," ");
        for(int j=7-i*2;j>=1;j--) printf("%s","*");
        for(int j=0;j<=i;j++) printf("%s"," ");

        printf("\n");
    }
}
