#include <stdio.h>
#include <stdlib.h>

struct Product {
	int Product_ID;
	char Product_Name[30];
	int Product_Price;
};

void printProduct(struct Product* p, int count)
{
	printf("<<�Էµ� ��ǰ ���>>\n");
	for (int j = 0; j < count; j++) 
	{
		printf("��ǰ ID: %d\n", p[j].Product_ID);
		printf("��ǰ��: %s\n", p[j].Product_Name);
		printf("����: %d\n\n", p[j].Product_Price);
	}
}

int main()
{
	struct Product p[5];  
	int i = 0;

	while (i < 5)
	{
		printf("��ǰ ������ �Է��ϼ��� (�Է� �ߴ��� ID�� 0�� �Է�)\n");
		printf("��ǰ ID: ");
		scanf_s("%d", &p[i].Product_ID);
		if (p[i].Product_ID == 0)
		{
			break;
		}
		printf("��ǰ��: ");
		scanf_s("%s", p[i].Product_Name, 30);
		printf("����: ");
		scanf_s("%d", &p[i].Product_Price);
		printf("\n");
		i++;
	}
	printf("\n");

	printProduct(p, i);

	return 0;
}
