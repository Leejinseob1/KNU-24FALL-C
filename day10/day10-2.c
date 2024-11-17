#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    RANK1 = 1,
    RANK2,
    RANK3
} Rank;

typedef struct Customer {
    char* customerName;
    Rank rank;
    int order_amount;
    int point;
    struct Customer* prev;
    struct Customer* next;
} Customer;

Customer* head = NULL;
Customer* tail = NULL;

char* safe_strdup(const char* str) {
    return _strdup(str);
}

Customer* createCustomer(const char* name, Rank rank, int order_amount, int point)
{
    Customer* newCustomer = (Customer*)malloc(sizeof(Customer));
    newCustomer->customerName = safe_strdup(name);
    newCustomer->rank = rank;
    newCustomer->order_amount = order_amount;
    newCustomer->point = point;
    newCustomer->prev = NULL;
    newCustomer->next = NULL;
    return newCustomer;
}

void addCustomer(const char* name, Rank rank, int order_amount, int point)
{
    Customer* newCustomer = createCustomer(name, rank, order_amount, point);

    if (!head)
    {
        head = tail = newCustomer;
        return;
    }

    Customer* current = head;
    while (current)
    {
        if (current->rank > rank ||
            (current->rank == rank && current->order_amount < order_amount) ||
            (current->rank == rank && current->order_amount == order_amount && current->point < point))
        {
            if (current == head)
            {
                newCustomer->next = head;
                head->prev = newCustomer;
                head = newCustomer;
            }
            else
            {
                newCustomer->prev = current->prev;
                newCustomer->next = current;
                current->prev->next = newCustomer;
                current->prev = newCustomer;
            }
            return;
        }
        current = current->next;
    }

    tail->next = newCustomer;
    newCustomer->prev = tail;
    tail = newCustomer;
}

void modifyCustomer(const char* name, Rank newRank, int newOrderAmount, int newPoint)
{
    Customer* current = head;

    while (current)
    {
        if (strcmp(current->customerName, name) == 0)
        {
            current->rank = newRank;
            current->order_amount = newOrderAmount;
            current->point = newPoint;

            if (current->prev) current->prev->next = current->next;
            if (current->next) current->next->prev = current->prev;
            if (current == head) head = current->next;
            if (current == tail) tail = current->prev;

            current->prev = current->next = NULL;
            addCustomer(name, newRank, newOrderAmount, newPoint);
            return;
        }
        current = current->next;
    }
    printf("입력되지 않은 이름입니다.\n");
}

void printCustomers()
{
    Customer* current = head;
    printf("\n고객 리스트:\n");
    while (current)
    {
        printf("이름: %3s, 등급: %d등급, 주문 수: %3d, 포인트: %6d\n",
            current->customerName, current->rank, current->order_amount, current->point);
        current = current->next;
    }
}

void inputCustomer()
{
    char name[50];
    int rank, order_amount, point;

    printf("고객의 이름 입력:");
    scanf_s("%s", name, 50);
    printf("고객의 등급 입력(1등급에서 3등급): ");
    scanf_s("%d", &rank);
    printf("고객의 주문 수 입력: ");
    scanf_s("%d", &order_amount);
    printf("고객의 포인트 입력: ");
    scanf_s("%d", &point);

    addCustomer(name, (Rank)rank, order_amount, point);
    printf("고객 정보 등록 완료.\n");
}

void inputModifyCustomer()
{
    char name[50];
    int rank, order_amount, point;

    printf("수정할 고객의 이름 입력:");
    scanf_s("%s", name, 50);
    printf("고객의 새로운 등급 입력(1등급에서 3등급): ");
    scanf_s("%d", &rank);
    printf("고객의 주문 수 입력: ");
    scanf_s("%d", &order_amount);
    printf("고객의 포인트 입력: ");
    scanf_s("%d", &point);
    modifyCustomer(name, (Rank)rank, order_amount, point);
}

void freeList()
{
    Customer* current = head;
    while (current) {
        Customer* temp = current;
        current = current->next;
        free(temp->customerName);
        free(temp);
    }
    head = tail = NULL;
}

int main()
{
    int choice;
    int i = 1;

    while (i)
    {
        printf("\n");
        printf("1. 고객 정보 추가\n");
        printf("2. 고객 정보 수정\n");
        printf("3. 고객 정보 출력\n");
        printf("4. 프로그램 종료\n");
        printf("명령 선택: ");
        scanf_s("%d", &choice);

        switch (choice)
        {
        case 1:
            inputCustomer();
            break;
        case 2:
            inputModifyCustomer();
            break;
        case 3:
            printCustomers();
            break;
        case 4:
            printf("프로그램을 종료합니다.\n");
            freeList();
            i = 0;
            break;
        default:
            printf("잘못된 값.\n");
            break;
        }
    }

    return 0;
}
 