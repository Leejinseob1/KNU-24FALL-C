#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int* st;
    char* name;
    int* score;

    printf("학생 수 입력: ");
    scanf_s("%d", &N);

    st = (int*)malloc(sizeof(int) * N);
    name = (char*)malloc(sizeof(char) * N * 100);
    score = (int*)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
        printf("학번: ");
        scanf_s("%d", &st[i]);

        printf("이름: ");
        scanf_s("%s", name + (i * 100), 100);

        printf("점수: ");
        scanf_s("%d", &score[i]);
    }

    for (int i = 0; i < N; i++)
        printf("%d %s %d \n", st[i], name + (i * 100), score[i]);

    free(st);
    free(name);
    free(score);

    return 0;
}
