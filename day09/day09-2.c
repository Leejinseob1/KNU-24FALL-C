#include <stdio.h>
#include <stdlib.h>

struct Product {
	int Product_ID;
	char Product_Name[30];
	int Product_Price;
};

void printProduct(struct Product* p, int count)
{
	printf("<<입력된 상품 목록>>\n");
	for (int j = 0; j < count; j++) 
	{
		printf("상품 ID: %d\n", p[j].Product_ID);
		printf("상품명: %s\n", p[j].Product_Name);
		printf("가격: %d\n\n", p[j].Product_Price);
	}
}

int main()
{
	struct Product p[5];  
	int i = 0;

	while (i < 5)
	{
		printf("상품 정보를 입력하세요 (입력 중단은 ID에 0을 입력)\n");
		printf("상품 ID: ");
		scanf_s("%d", &p[i].Product_ID);
		if (p[i].Product_ID == 0)
		{
			break;
		}
		printf("상품명: ");
		scanf_s("%s", p[i].Product_Name, 30);
		printf("가격: ");
		scanf_s("%d", &p[i].Product_Price);
		printf("\n");
		i++;
	}
	printf("\n");

	printProduct(p, i);

	return 0;
}
