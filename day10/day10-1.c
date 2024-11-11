#include <stdio.h>
#include <stdlib.h>

struct NODE {
	int data;
	struct NODE *link;
};

struct NODE* create_node(int data)
{
	struct NODE* new_node = (struct NODE*)malloc(sizeof(struct NODE));
	new_node->data = data;
	new_node->link = NULL;
	
	return new_node;
}

struct NODE* last_node()
{
	struct NODE* cur = head;
	while (cur->link != NULL) {
		cur = cur->link;
	}
	return cur;
}

void insert_node_last(struct NODE* new_node)
{
	struct NODE* last = last_node();
	last->link = new_node;
}

void print_nodes()
{
	struct NODE* cur = head->link;
	while (cur != NULL) {
		printf("%d \n", cur->data);
		cur = cur->link;
	}
}

struct NODE* find_node(int value)
{
	struct NODE* cur = head->link;
	while (cur != NULL) {
		if (cur->data == value)
			return cur;
		cur = cur->link;
	}
	return NULL;
}

int delete_node(int value)
{
	struct NODE* prev = head;
	struct NODE* cur = head->link;
	while (cur != NULL) {
		if (cur->data == value) {
			prev->link = cur->link;
			free(cur); 
			return 1; 
		}

		prev = cur;
		cur = cur->link;
	}
	return 0;
}
void input1()
{
	int score;
	char* name[10];

	struct NODE* head=NULL;
	printf("학생 이름: ");
	scanf_s("%s", &name);
	printf("%s의 성적", name,40);
	scanf_s("%d", &score);
	create_node(name);
}
void input2()
{
	printf("학생 이름:");
}

int main()
{
	int input=0;
	while (1)
	{
		printf("1. 학생의 성적을 입력 \n");
		printf("2. 학생 정보 제거 \n");
		printf("3. 프로그램 종료 \n");
		scanf_s("%d", input);

		if (input == 1)
			input1();
		else if (input == 2)
			input2();
		else if (input == 3)
			break;
		else
			printf("잘못된 값");
	}

	return 0;
}