#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

	double x = 0;
	double y = 0;
	double r = 0, pi=0;
	int i=0, j=0;

	srand(time(NULL));
// 1,000,000,000 □ ■
	for (j=0; j <=100; j++)
	{
		double count = 0, circle = 0;
	
		while (count < 10000000)
		{
			x = (double)rand() / (double)RAND_MAX;
			y = (double)rand() / (double)RAND_MAX;

			if (sqrt(pow(x, 2) + pow(y, 2)) < 1)
			{
				circle++;
			}
			count++;
		}
		r = circle / count * 4;
		printf("%3d%%진행... 원주율: %lf ", j, r);
		for (i=0; i < j/5; i++)
		{
			printf("■");
		}
		for (i=0; i <20- j / 5; i++)
		{
			printf("□");
		}
		printf("\n");
		pi =pi+ r;
	}
	printf("원주율 =%lf", pi/101);
	return 0;
}