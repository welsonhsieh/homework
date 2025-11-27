#include<stdio.h>
#include<stdlib.h>

int square(int y);

int main()
{

    int n[10] = {0};

    printf("%s%13s\n","Element","Value");

    for(int i=0;i<10;i++)
    {
        printf("%7d%13d\n",i,n[i]);
    }

    system("pause");
    return 0;
}
