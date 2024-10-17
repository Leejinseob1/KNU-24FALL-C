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

void movePointer(void* array[SIZE][SIZE])
{
	int x = 0, y = 0, n;
	while(y<10)
	{
		printf("현재 위치 : (%d, %d), 배열의 값 : %d \n", x, y, array[x][y]);
		n=array[x][y];
		x=x+n;
		if (x >= 10)
		{
			x = x % 10;
			y = y + 1;
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