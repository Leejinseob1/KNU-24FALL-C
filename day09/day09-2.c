#include <stdio.h>
#include <stdlib.h>

struct Product {
	int Product_ID[5];
	char Product_Name[5][30];
	int Product_Price[5]
};

void printProduct()
{

}

int main()
{
	struct Product *p;
	p = (struct Product*)malloc(sizeof(struct Product));
	for (int i = 1; i < 5; i++)
	{
		pirntf("��ǰ ������ �Է��ϼ��� (�Է� �ߴ��� ID�� 0�� �Է�");
		printf("��ǰ ID: ");
		if (p->Product_ID == 0)
			i = +5;
		scanf_s("%d", p.Product_ID);
		printf("��ǰ��: ");
		scanf_s("%s", p.Product_Name);
		printf("����: ");
		scanf_s("%d", p.Product_Price);
	}

	printf("<<�Էµ� ��ǰ ���>>");

}