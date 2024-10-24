#include <stdio.h>

struct vector1 {
	int x1;
	int y1;
	int z1;
};

struct vector2 {
	int x2;
	int y2;
	int z2;
};


void Sum_Vector(struct vector1 v1, struct vector2 v2)
{
	printf("벡터의 합은 x:%d y:%d z:%d\n", v1.x1+v2.x2, v1.y1+v2.y2, v1.z1+v2.z2);
}
int Subtraction_Vector(struct vector1 v1, struct vector2 v2)
{
	printf("벡터의 차는 x:%d y:%d z:%d\n", v1.x1-v2.x2, v1.y1-v2.y2, v1.z1-v2.z2);
}

int CrossProduct_Vector(struct vector1 v1, struct vector2 v2)
{
	printf("벡터의 외적은 x:%d y:%d z:%d\n", v1.y1 * v2.z2 - v1.z1 * v2.y2, v1.z1 * v2.x2 - v1.x1 * v2.z2, v1.x1 * v2.y2 - v1.y1 * v2.x2);
}

int DotProduvt_Vector(struct vector1 v1, struct vector2 v2)
{
	printf("벡터의 내적은 vec1 * vec2=%d\n", v1.x1 * v2.x2 + v1.y1 * v2.y2 + v1.z1 * v2.z2);

}

int main()
{
	struct vector1 v1;
	struct vector2 v2;
	int order=0;


	printf("첫 번째 벡터(x,y,z): ");
	scanf_s("%d, %d, %d", &v1.x1, &v1.y1, &v1.z1);
	printf("두 번째 벡터(x,y,z): ");
	scanf_s("%d, %d, %d", &v2.x2, &v2.y2, &v2.z2);

	printf("입력된 첫 번째 벡터 %5d, %5d, %5d\n", v1.x1, v1.y1, v1.z1);
	printf("입력된 두 번째 벡터 %5d, %5d, %5d\n", v2.x2, v2.y2, v2.z2);
	printf("\n-------------------------\n");

	while (1)
	{
		printf("1. 벡터의 합\n");
		printf("2. 벡터의 차\n");
		printf("3. 벡터의 외적\n");
		printf("4. 벡터의 내적\n");
		printf("5. 종료\n");
		printf("-------------------------\n");

		printf("명령 입력: ");
		scanf_s("%d", &order);
		printf("\n");

		if (order == 1)
		{
			Sum_Vector(v1, v2);
			printf("\n-------------------------\n");
		}
		else if (order == 2)
		{
			Subtraction_Vector(v1, v2);
			printf("\n-------------------------\n");
		}
		else if (order == 3)
		{
			CrossProduct_Vector(v1, v2);
			printf("\n-------------------------\n");
		}
		else if (order == 4)
		{
			DotProduvt_Vector(v1, v2);
			printf("\n-------------------------\n");
		}
		else if (order == 5)
			break;
		else
		{
			printf("잘못된 값");
		}
	}
	return 0;
}