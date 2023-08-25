#include <stdio.h>
#include <stdlib.h>
struct node {
int data;
struct node* link;
} *head, *current;
void creat_node(int data);
void print_data(struct node* head);
struct node* add_at_beg(struct node* head, int beginning);
int main() {
int node, data, beginning;
head = NULL;
printf("Enter the number of nodes: ");
scanf("%d", &node);
for (int i = 1; i <= node; i++) {
printf("Enter the data for node %d: ", i);
scanf("%d", &data);
creat_node(data);
}
print_data(head);
printf("\nEnter data for adding at the beginning: ");
scanf("%d", &beginning);
head = add_at_beg(head, beginning);
print_data(head);
return 0;
}
void creat_node(int data) {
struct node* new_node = malloc(sizeof(struct node));
new_node->data = data;
new_node->link = NULL;
if (head == NULL) {
head = new_node;
current = new_node;
} else {
current->link = new_node;
current = new_node;
}
}
struct node* add_at_beg(struct node* head, int beginning) {
struct node* newNode = malloc(sizeof(struct node));
newNode->data = beginning;
newNode->link = head;
return newNode;
}
void print_data(struct node* head) {
if (head == NULL) {
printf("Linked list is empty");
} else {
struct node* ptr = head;
while (ptr != NULL) {
printf(" %d", ptr->data);
ptr = ptr->link;
}
}
}
