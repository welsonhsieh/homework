#include<stdio.h>
#include<stdlib.h>
int main()
{
    char string1[20];
    char string2[]="string literal";

    printf("Enter a string: ");
    scanf("%s",string1);

    printf("string1 is: %s\nstring2 is: %s\n",string1,string2);

    printf("string1 with spaces between characters is: \n");

    for(int i=0;i<sizeof(string1);i++)
    {
        printf("%c ",string1[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}
