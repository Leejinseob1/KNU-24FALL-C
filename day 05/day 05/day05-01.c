#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, max=0, min;
    int* st;
    char* name;
    int* score;
    double av=0;

    printf("�л� �� �Է�: ");
    scanf_s("%d", &N);

    st = (int*)malloc(sizeof(int) * N);
    name = (char*)malloc(sizeof(char) * N * 100);
    score = (int*)malloc(sizeof(int) * N);

    for (int i = 0; i < N; i++)
    {
        printf("�й�: ");
        scanf_s("%d", &st[i]);

        printf("�̸�: ");
        scanf_s("%s", name + (i * 100), 100);

        printf("����: ");
        scanf_s("%d", &score[i]);
    }

    min = score[0];

    for (int i = 1; i < N; i++)
    {
        if (score[i] > max)
            max = score[i];
        if (score[i] < min)
            min = score[i];
        av += score[i];
    }

    av = av / N;

    for (int i = 0; i < N; i++)
        printf("%d %s %d \n", st[i], name + (i * 100), score[i]);

    printf("�ִ� ����:%d \n", max);
    printf("�ּ� ����:%d \n", min);
    printf("��� :%.1f \n", av);

    free(st);
    free(name);
    free(score);

    return 0;
}
