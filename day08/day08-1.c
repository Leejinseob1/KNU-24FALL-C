#include <stdio.h>
#include<string.h>

int main()
{
	E:
	char sentence[100];
	

	printf("문자열을 입력하세요: ");
	scanf_s("%99s", sentence, sizeof(sentence));

	int length = strlen(sentence);
	char* start = sentence;
	char* end = sentence + length-1;

	for (int i = 0; i < length; i++)
	{
		if (sentence[i]< 65 || sentence[i]>122)
		{
			printf("영어만 입력해 주세요. \n");
			goto E;
		}
	}
	
	printf("뒤집어진 문자열:");

	while (end >= start)
	{
		printf("%c", *end);
		end--;
	}
	return 0;
}