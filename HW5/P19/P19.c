#include <stdio.h>
#include <stdlib.h>

int main()
{
	int b[] = {10, 20, 30 ,40};
    int *bPtr = b;

	printf("Array b printed with:\nArray subscript notation\n");
    for(int i=0;i<4;i++) printf("b[%d] = %d\n",i,b[i]);

    printf("\nPointer/offest notation where\n"
           "the pointer is the array name\n");
    for(int i=0;i<4;i++) printf("*(b + %d) = %d\n",i,*(b+i));

    printf("\nPointer subscript notation\n");
    for(int i=0;i<4;i++) printf("bPtr[%d] = %d\n",i,bPtr[i]);

    printf("\nPointer/offest notation\n");
    for(int i=0;i<4;i++) printf("*(bPtr + %d) = %d\n",i,*(bPtr+i));
	system("pause");
	return 0;
}
