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
    printf("�Էµ��� ���� �̸��Դϴ�.\n");
}

void printCustomers()
{
    Customer* current = head;
    printf("\n�� ����Ʈ:\n");
    while (current)
    {
        printf("�̸�: %3s, ���: %d���, �ֹ� ��: %3d, ����Ʈ: %6d\n",
            current->customerName, current->rank, current->order_amount, current->point);
        current = current->next;
    }
}

void inputCustomer()
{
    char name[50];
    int rank, order_amount, point;

    printf("���� �̸� �Է�:");
    scanf_s("%s", name, 50);
    printf("���� ��� �Է�(1��޿��� 3���): ");
    scanf_s("%d", &rank);
    printf("���� �ֹ� �� �Է�: ");
    scanf_s("%d", &order_amount);
    printf("���� ����Ʈ �Է�: ");
    scanf_s("%d", &point);

    addCustomer(name, (Rank)rank, order_amount, point);
    printf("�� ���� ��� �Ϸ�.\n");
}

void inputModifyCustomer()
{
    char name[50];
    int rank, order_amount, point;

    printf("������ ���� �̸� �Է�:");
    scanf_s("%s", name, 50);
    printf("���� ���ο� ��� �Է�(1��޿��� 3���): ");
    scanf_s("%d", &rank);
    printf("���� �ֹ� �� �Է�: ");
    scanf_s("%d", &order_amount);
    printf("���� ����Ʈ �Է�: ");
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
        printf("1. �� ���� �߰�\n");
        printf("2. �� ���� ����\n");
        printf("3. �� ���� ���\n");
        printf("4. ���α׷� ����\n");
        printf("��� ����: ");
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
            printf("���α׷��� �����մϴ�.\n");
            freeList();
            i = 0;
            break;
        default:
            printf("�߸��� ��.\n");
            break;
        }
    }

    return 0;
}
 