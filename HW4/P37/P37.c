#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int linearSearch(const int array[],int key);
int main(void)
{
	int a[SIZE];
	int x,element;
	for(int i=0;i<SIZE;i++) a[i] = 2*i;

	printf("Enter integer search key:\n");
	scanf("%d",&x);

	element = linearSearch(a,x);

	if(element != -1) printf("Found value in element %d\n",element);
	else printf("Value not found\n");
}
int linearSearch(const int array[],int key)
{
	for (int i = 0; i < SIZE; i++)
	{
		if(array[i] == key) return i;
	}
	return -1;
}
