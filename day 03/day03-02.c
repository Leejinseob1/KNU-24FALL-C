#include <stdio.h>
int factorial(a)
{
	int num, num1;
	for (num = 1; num < a; num++)
	{
		a = a * num;
		return a;
	}
}
int main()
{
	int a, b;
	printf("����� ���丮�� �� �Է�: ");
	scanf_s("%d", &a);
	
	printf("a! = %d", factorial(a));
}