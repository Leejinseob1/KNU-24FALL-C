#include <stdio.h>


int primenumber(int a)
{
	int num;
	float i;
	for (num = 2; num < a; num++)
	{
		i = a % num;
		if (i == 0)
			return 0;
		else
			return 1;
	}
}
int main()
{
	int a, b;
	printf("�Ҽ����� Ȯ���� ���� �Է��ϼ���: ");
	scanf_s("%d", &a);
	if (a < 1)
	{
		printf("����� �Է��� �ּ���");
	}
	if (a == 1)
	{
		printf("�ش� ���� �Ҽ��� �ƴմϴ�.");
	}
	else 
	{
		
		b= primenumber(a);
		if (b == 0)
		{
			printf("�ش� ���� �Ҽ��� �ƴմϴ�.");
		}
		else if (b == 1)
		{
			printf("�ش� ���� �Ҽ��Դϴ�. ");
		}
	}
	return 0;
}