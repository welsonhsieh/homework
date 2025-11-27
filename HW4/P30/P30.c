#include <stdio.h>
#include <stdlib.h>

void inverse(int*);
int main(void)
{
	int a[3] = { 3,5,7 };
	for (int i = 0; i < 3; i++) printf("%d  ", a[i]);
	printf("\n");

	inverse(a);

	for (int i = 0; i < 3; i++) printf("%d  ", a[i]);
	printf("\n");
	system("pause");
	return 0;
}
void inverse(int* b)
{
	for (int i = 0; i <= 3 / 2; i++)
	{
		int k = b[i];
		b[i] = b[2 - i];
		b[2 - i] = k;
	}
}
