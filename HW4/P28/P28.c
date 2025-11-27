#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void modifyArray(int []);
void modifyElement(int);
int main(void)
{
	int x[SIZE] = { 0,1,2,3,4 };
	printf("Effects of passing entire array by reference:\n\nThe"
		"values of the original are:\n");
	for (int i = 0; i < SIZE; i++) printf("%3d", x[i]);
	printf("\n");

	modifyArray(x);

	printf("The values of the modified array are:\n");
	for (int i = 0; i < SIZE; i++) printf("%3d", x[i]);
	printf("\n");
	printf("\n\nEffects of passing array element"
		"by value:\n\nThe value of x[3] is %d\n", x[3]);

	modifyElement(x[3]);
	printf("The value of x[3] is %d\n", x[3]);
	system("pause");
	return 0;
}
void modifyArray(int y[])
{
	for (int j = 0; j < SIZE; j++) y[j] *= 2;
}
void modifyElement(int e)
{
	printf("Value in modifyElement is %d\n",e *= 2);
}
