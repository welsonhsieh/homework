#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<time.h>
int roll(int*,int*,int*);

int main()
{

    srand(time(NULL));
    //roll();
    int a,b,sum,point;
    /*a = 1+rand()%6;
    b = 1+rand()%6;
    sum = a + b;
    printf("player rolled: %d + %d = %d\n",a,b,sum);*/
    roll(&a,&b,&sum);
    if(sum==7 || sum==11)
    {
        printf("palyer wins\n");
        return 0;
    }
    if(sum==2 || sum==3 || sum==12)
    {
        printf("palyer loses\n");
        return 0;
    }
    point = sum;
    printf("point is %d\n",point);
    /*a = 1+rand()%6;
    b = 1+rand()%6;
    sum = a + b;*/
    while(roll(&a,&b,&sum))
    {
        if(sum == point)
        {
            printf("player wins\n");
            break;
        }
        if(sum == 7)
        {
            printf("player loses\n");
            break;
        }
    }
}
int roll(int *a,int *b, int *sum)
{

    *a = 1+rand()%6;
    *b = 1+rand()%6;
    *sum = *a + *b;
    printf("player rolled: %d + %d = %d\n",*a,*b,*sum);
    return 1;
}
