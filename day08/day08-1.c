#include <stdio.h>
#include<string.h>

int main()
{
	E:
	char sentence[100];
	

	printf("���ڿ��� �Է��ϼ���: ");
	scanf_s("%99s", sentence, sizeof(sentence));

	int length = strlen(sentence);
	char* start = sentence;
	char* end = sentence + length-1;

	for (int i = 0; i < length; i++)
	{
		if (sentence[i]< 65 || sentence[i]>122)
		{
			printf("��� �Է��� �ּ���. \n");
			goto E;
		}
	}
	
	printf("�������� ���ڿ�:");

	while (end >= start)
	{
		printf("%c", *end);
		end--;
	}
	return 0;
}