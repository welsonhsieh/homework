#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int binarySearch(int first,int last,int a[],int n)
{
    int mid=(first+last)/2;
    if(n == a[mid]) return mid;
    else if(n < a[mid]) return binarySearch(first,a[mid],a,n);
    else if(n > a[mid]) return binarySearch(a[mid],last,a,n);
}
int main()
{
    int array[10],n;
    printf("enter array:\n");
    for(int i=0;i<10;i++) scanf("%d",&array[i]);

    printf("enter search number: ");
    scanf("%d",&n);

    printf("key: %d", binarySearch(0,9,array,n));

}
