#include <stdio.h>
int main()
{
	int num;
	double n1, n2, n3 = 0;
	printf("���ϴ� ����� �Է��Ͻÿ�. \n");
	printf("1.���ϱ� 2.���� 3.���ϱ� 4.������ \n");
	printf("��� :");
	scanf_s("%d", &num);
	printf("���� 1�� �Է��ϼ���: ");
	scanf_s("%lf", &n1);
	printf("���� 2�� �Է��ϼ���: ");
	scanf_s("%lf", &n2);
	if (num == 1)
	{
		n3 = n1 + n2;
	}
	else if (num == 2)
	{
		n3 = n1 - n2;
	}
	else if (num == 3)
	{
		n3 = n2 * n1;
	}
	else if (num == 4)
	{
		n3 = n1 / n2;	
	}
	else
		printf("�߸��� �����Դϴ�. \n");
	printf("��: %lf", n3);
	return 0;
}