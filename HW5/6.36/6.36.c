#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
void stringReverse(char s[])
{
    for(int i=strlen(s)-1;s[i]!='\0';i--)
    {
        printf("%c",s[i]);
    }
}
int main()
{
    char s[20];
    scanf("%s",&s);
    //rintf("%c",s[1]);
    stringReverse(s);

    system("pause");
}
