#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
void swap(int *a, int *b)
{
    int k = *a;
    *a = *b;
    *b =k;
}
void bubbleSort(int *const array, const int size)
{
    for(int i=size-2; i>=0;i--)
    {
        for(int j=0;j<=i;j++)
        {
            if(array[j] > array[j+1]) swap(&array[j], &array[j+1]);
        }
    }
}
int main() {
	int a[SIZE] = {2,6,4,8,10,12,89,68,45,37};

	printf("Data items in original order\n");

    for(int i=0;i<SIZE;i++) printf("%4d",a[i]);
    printf("\n");

    bubbleSort(a, SIZE);

    printf("Data items in ascending order\n");
    for(int i=0;i<SIZE;i++) printf("%4d",a[i]);
    printf("\n");

	system("pause");
	return 0;
}
