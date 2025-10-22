#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    printf("*********                   ***                                 *")
    printf("*           *               *         *                           * * *")
    printf("*           *           *                 *                     * * * * *")
    printf("*           *           *                 *                          *")
    printf("*           *           *                 *                          *")
    printf("*           *           *                 *                          *")
    printf("*           *           *                 *                          *")
    printf("*           *               *         *                              *")
    printf("*********                   ***                                  *")*/



    for(int i=1; i<=9; i++)
    {
        printf("*");
        for(int j=0;j<7;j++)
        {
            if(i==1 || i==9) printf("*");
            else printf(" ");
        }
        printf("*");

        printf("\t");

        if(i==1 || i==9) printf("   ");
        else if(i==2 || i==8) printf(" * ");
        else printf("*  ");
        if(i==1 || i==9) printf("***");
        else printf("   ");
        if(i==1 || i==9) printf("   ");
        else if(i==2 || i==8) printf(" * ");
        else printf("  *");

        printf("\t");

        if(i==2) printf(" *** ");
        else if(i==3) printf("*****");
        else printf("  *  ");

        printf("\t");

        if(i<=5)
        {
            for(int j=0; j<5-i; j++) printf(" ");
            printf("*");
            if(i!=1 && i!=9)
            {
                for(int j=0; j<-3+2*i; j++) printf(" ");
                printf("*");
            }
            for(int j=0; j<5-i; j++) printf(" ");
        }
        else
        {
            for(int j=0; j<i-5; j++) printf(" ");
            printf("*");
            if(i!=1 && i!=9)
            {
                for(int j=0; j<-1+2*(9-i); j++) printf(" ");
                printf("*");
            }
            for(int j=0; j<i-5; j++) printf(" ");
        }

        printf("\n");
    }
}
