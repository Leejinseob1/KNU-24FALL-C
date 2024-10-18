#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

static void fillRandom(int array[SIZE][SIZE])
{
	int i, j;

	srand(time(NULL));
	
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			array[i][j] = rand() % 20 + 1;
		}
	}
}

void printfArray(int array[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%2d ", array[i][j]);
		}
		printf("\n");
	}
}

void movePointer(void* array)
{
	int x = 0, y = 0;
	int n;
	int* ptr = (int*)array;

	while (1)
	{
		n = *(ptr + y * SIZE + x); 
		printf("현재 위치: (%d, %d), 배열의 값: %d\n", x, y, n);

		y = y + n; 

		if (y >= SIZE)
		{
			y = y % SIZE; 
			x = x + 1;    
		}

		if (x >= SIZE)
		{
			printf("더 이상 이동할 수 없습니다. 최종 위치: (%d, %d)\n", x-1, (y-n+20)%10);
			break;
		}
	}
}

int main()
{
	int array[SIZE][SIZE];

	fillRandom(array);
	printfArray(array);
	movePointer(array);

	return 0;
}