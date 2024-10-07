#include <stdio.h>
#include <stdlib.h>

struct NODE
{
	int data;
	struct NODE* link;
};

struct NODE* create_node(int data)
{
	struct NODE* new_node = (struct NODE*)malloc(sizeof(struct NODE));
	new_node -> data = data;
	new_node ->link = NULL;
	return new_node;
}

void printnode(struct NODE* node)
{
	while (node != NULL)
	{
		printf("%d -> ", node->data);
		node = node->link;
	}
	printf("NULL \n");
}

int main() {
	struct Node* head = NULL; 

	appendNode(1);
	appendNode(2);
	appendNode(3);
	appendNode(4);
	appendNode(4);

	printnode(head);