#include <stdio.h>
#include <stdlib.h>


struct Product {
	int Product_ID[5];
	char Product_Name[5][30];
	int Product_Price[5];
};

void printProduct(struct Product p)
{
	printf("<<�Էµ� ��ǰ ���>> \n");
	while(1)
	{
		int j=0;
		if (p.Product_ID[j] == NULL)
			break;
		printf("��ǰ ID: %d \n", p.Product_ID[j]);
		printf("��ǰ��: %s \n", p.Product_Name[j]);
		printf("����: %d \n", p.Product_Price[j]);
		printf("\n");
	}
}

int main()
{
	struct Product p[5];
	// p = (struct Product*)malloc(sizeof(struct Product));
	int i = 0;
	while(i<5)
	{
		printf("��ǰ ������ �Է��ϼ��� (�Է� �ߴ��� ID�� 0�� �Է�)\n");
		printf("��ǰ ID: ");
		scanf_s("%d", &p->Product_ID[i]);
		if (p->Product_ID[i] == 0)
			break;
		printf("��ǰ��: ");
		scanf_s("%s", &p->Product_Name[i],30);
		printf("����: ");
		scanf_s("%d", &p->Product_Price[i]);
		i++;
	}
	printf("\n");

	printProduct(p[5]);
	return 0;
}