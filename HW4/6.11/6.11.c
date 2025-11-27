#include <stdio.h>
#include <stdlib.h>
int swap(int*,int*);
int main(void)
{
	int a[10]={0,7,3,5,1,8,3,2,5,9};
	printf("Before sort:\n");
	for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n\nsort:\n");
	for(int i=10-1;i>=0;i--)
    {
        int s=0;
        for(int j=1;j<i;j++)
        {
            if(a[j-1]>a[j])
            {
                swap(&a[j-1],&a[j]);
                s=1;
            }
        }
        for(int k=0;k<10;k++) printf("%d ",a[k]);
        printf("\n");
        if(s==0) break;
    }

    printf("\nAfter sort:\n");
	for(int i=0;i<10;i++) printf("%d ",a[i]);
    printf("\n");
	system("pause");
}
int swap(int* a,int* b)
{
	int k=*a;
	*a=*b;
	*b=k;
}
