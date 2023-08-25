#include<stdio.h>
#include<stdlib.h>
struct node {
 int data;
 struct node* link;
}*head, * current;
void insert_node(int data);
void print_data(struct node* head);
int main() {
 int node, data;
 head = NULL;
 printf("Enter the number of node: ");
 scanf("%d", &node);
 for (int i = 1; i <= node; i++) {
 printf("Enter the data for node %d : ", i);
 scanf("%d", &data);
 insert_node(data);
 }
 print_data(head);
 return 0;
}
void insert_node(int data) {
 struct node* new_node = malloc(sizeof(struct node));
 new_node->data = data;
 new_node->link = NULL;
 if (head == NULL) {
 head = new_node;
 current = new_node;
 }
 else {
 current->link = new_node;
 current = new_node;
 }
}
void print_data(struct node* head) {
 if (head == NULL) {
 printf("Linked list is empty");
 }
 struct node* ptr = head;
 int count = 1;
 while (ptr != NULL) {
 if (count % 2 == 0) {
 printf(" %d", ptr->data);
 }
 ptr = ptr->link;
 count++;
 }
}
