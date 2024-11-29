#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define max_topping 10000
// topping_len은 배열 topping의 길이입니다.
int solution(int topping[], size_t topping_len) {
    int answer = -1;
    return answer;
}

int main()
{
    int* chul[max_topping]={ 0 };
    int* bro[max_topping] = { 0 };
    int* left[max_topping] = { 0 };
    int* right[max_topping] = { 0 };
    int* cake[1000000] = {0};
    int i, j = 0;
    while (1)
    {
        printf("토핑을 입력하세요.");
        scanf_s("%d", &i);
        if (i == 0)
            break;
        cake[j] = i;
        j++;
    }

    solution(cake, j);
    return 0;
}







