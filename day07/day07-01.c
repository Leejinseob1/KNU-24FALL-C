#include <stdio.h>
int main()
{
	int n = 0;
	printf("숫자 입력:");
	scanf_s("%d", &n);

	for (int i = 0; i <= n; i++)
	{
		for (int j = n; j > i; j--)
		{
			printf(" ");
		}

		for (int j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
