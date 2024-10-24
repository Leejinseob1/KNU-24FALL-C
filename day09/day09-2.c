#include <stdio.h>
#include <stdlib.h>


struct Product {
	int Product_ID[5];
	char Product_Name[5][30];
	int Product_Price[5];
};

void printProduct(struct Product p)
{
	printf("<<입력된 상품 목록>> \n");
	while(1)
	{
		int j=0;
		if (p.Product_ID[j] == NULL)
			break;
		printf("상품 ID: %d \n", p.Product_ID[j]);
		printf("상품명: %s \n", p.Product_Name[j]);
		printf("가격: %d \n", p.Product_Price[j]);
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
		printf("상품 정보를 입력하세요 (입력 중단은 ID에 0을 입력)\n");
		printf("상품 ID: ");
		scanf_s("%d", &p->Product_ID[i]);
		if (p->Product_ID[i] == 0)
			break;
		printf("상품명: ");
		scanf_s("%s", &p->Product_Name[i],30);
		printf("가격: ");
		scanf_s("%d", &p->Product_Price[i]);
		i++;
	}
	printf("\n");

	printProduct(p[5]);
	return 0;
}