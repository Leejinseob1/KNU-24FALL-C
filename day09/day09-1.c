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
	printf("������ ���� x:%d y:%d z:%d\n", v1.x1+v2.x2, v1.y1+v2.y2, v1.z1+v2.z2);
}
int Subtraction_Vector(struct vector1 v1, struct vector2 v2)
{
	printf("������ ���� x:%d y:%d z:%d\n", v1.x1-v2.x2, v1.y1-v2.y2, v1.z1-v2.z2);
}

int CrossProduct_Vector(struct vector1 v1, struct vector2 v2)
{
	printf("������ ������ x:%d y:%d z:%d\n", v1.y1 * v2.z2 - v1.z1 * v2.y2, v1.z1 * v2.x2 - v1.x1 * v2.z2, v1.x1 * v2.y2 - v1.y1 * v2.x2);
}

int DotProduvt_Vector(struct vector1 v1, struct vector2 v2)
{
	printf("������ ������ vec1 * vec2=%d\n", v1.x1 * v2.x2 + v1.y1 * v2.y2 + v1.z1 * v2.z2);

}

int main()
{
	struct vector1 v1;
	struct vector2 v2;
	int order=0;


	printf("ù ��° ����(x,y,z): ");
	scanf_s("%d, %d, %d", &v1.x1, &v1.y1, &v1.z1);
	printf("�� ��° ����(x,y,z): ");
	scanf_s("%d, %d, %d", &v2.x2, &v2.y2, &v2.z2);

	printf("�Էµ� ù ��° ���� %5d, %5d, %5d\n", v1.x1, v1.y1, v1.z1);
	printf("�Էµ� �� ��° ���� %5d, %5d, %5d\n", v2.x2, v2.y2, v2.z2);
	printf("\n-------------------------\n");

	while (1)
	{
		printf("1. ������ ��\n");
		printf("2. ������ ��\n");
		printf("3. ������ ����\n");
		printf("4. ������ ����\n");
		printf("5. ����\n");
		printf("-------------------------\n");

		printf("��� �Է�: ");
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
			printf("�߸��� ��");
		}
	}
	return 0;
}