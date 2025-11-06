#include<stdio.h>
int main()
{
    int acc;
    double ba,ch,cred,limit;
    while(1)
    {
        printf("Enter account number (-1 to end): ");
        scanf("%d",&acc);
        if(acc == -1) break;

        printf("Enter beginning balance: ");
        scanf("%lf",&ba);
        printf("Enter total charges: ");
        scanf("%lf",&ch);
        printf("Enter total credits: ");
        scanf("%lf",&cred);
        printf("Enter credits limit: ");
        scanf("%lf",&limit);

        if(ba+ch-cred > limit)
        {
            printf("Account:\t%d\n",acc);
            printf("Credit limit:\t%.2f\n",limit);
            printf("Balance:\t%.2f\n",ba+ch-cred);
            printf("Credits limit Exceeded.\n");
        }
        printf("\n");
    }


}
