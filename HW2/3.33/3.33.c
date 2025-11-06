#include<stdio.h>
int main()
{
    int length,breadth;
    printf("length : ");
    scanf("%d",&length);
    printf("breadth : ");
    scanf("%d",&breadth);

    for(int i=1; i<=length; i++)
    {
        printf("+");
        for(int j=2; j<breadth; j++)
        {
            if(i==1 || i==length) printf("+");
            else printf(" ");
        }
        printf("+\n");
    }
}
