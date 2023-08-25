: #include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node* link;
}*head, * current;
void creat_node(int data);
void print_data(struct node* head);
void add_at_end(struct node* head, int last);
int main() {
int node, data, last;
head = NULL;
printf("Enter the number of node: ");
scanf("%d", &node);
for (int i = 1; i <= node; i++) {
printf("Enter the data for node %d : ", i);
scanf("%d", &data);
creat_node(data);
}
print_data(head);
printf("\nAdd to end: ");
scanf("%d", &last);
add_at_end(head, last);
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
}
else {
current->link = new_node;
current = new_node;
}
}
void add_at_end(struct node* head, int last) {
struct node* ptr, * temp;
ptr = head;
temp = malloc(sizeof(struct node));
temp->data = last;
temp->link = NULL;
while (ptr->link != NULL) {
ptr = ptr->link;
}
ptr->link = temp;
}
void print_data(struct node* head) {
if (head == NULL) {
printf("Linked list is empty");
}
struct node* ptr = head;
while (ptr != NULL) {
printf(" %d", ptr->data);
ptr = ptr->link;
}
}
