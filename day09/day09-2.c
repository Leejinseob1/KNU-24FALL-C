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
		pirntf("상품 정보를 입력하세요 (입력 중단은 ID에 0을 입력");
		printf("상품 ID: ");
		if (p->Product_ID == 0)
			i = +5;
		scanf_s("%d", p.Product_ID);
		printf("상품명: ");
		scanf_s("%s", p.Product_Name);
		printf("가격: ");
		scanf_s("%d", p.Product_Price);
	}

	printf("<<입력된 상품 목록>>");

}