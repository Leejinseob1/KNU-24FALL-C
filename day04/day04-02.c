#include <stdio.h>
void swap(int* a1, int* b1)
{
	int c = *a1;
	*a1 = *b1;
	*b1 = c;
	return;
}

int main()
{
	int a = 10, b = 10;
	printf("a= %d, b= %d \n", a, b);
	swap(&a, &b);
	printf("a= %d, b= %d \n", a, b);
	return 0;

}