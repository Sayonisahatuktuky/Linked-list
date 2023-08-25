#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *prev;
struct node *next;
}*head;
struct node *createList(struct node *head);
struct node *addToEmpty(struct node *head, int data);
struct node *addAtEnd(struct node *head, int data);
struct node *addAtBeginning(struct node *head, int data);
void print_data(struct node *head);
int main(){
head = NULL;
head = createList(head);
print_data(head);
int beginning;
printf("\nEnter data for adding at the beginning: ");
scanf("%d", &beginning);
head = addAtBeginning(head, beginning);
print_data(head);
return 0;
}
struct node *createList(struct node *head){
int node, data;
printf("Enter the number of nodes: ");
scanf("%d", &node);
if(node == 0){
return head;
}
printf("Enter element for node 1: ");
scanf("%d", &data);
head = addToEmpty(head, data);
for(int i = 1; i < node; i++){
printf("Enter element for node %d: ", i+1);
scanf("%d", &data);
head = addAtEnd(head, data);
}
return head;
}
struct node *addToEmpty(struct node *head, int data){
struct node *temp = malloc(sizeof(struct node));
temp->prev = NULL;
temp->data = data;
temp->next = NULL;
head = temp;
return head;
}
struct node *addAtEnd(struct node *head, int data) {
struct node *temp = malloc(sizeof(struct node));
temp->data = data;
temp->next = NULL;
struct node *ptr = head;
while (ptr->next != NULL) {
ptr = ptr->next;
}
ptr->next = temp;
temp->prev = ptr;
return head;
}
struct node *addAtBeginning(struct node *head, int data) {
struct node *temp = malloc(sizeof(struct node));
temp->data = data;
temp->prev = NULL;
temp->next = head;
if (head != NULL) {
head->prev = temp;
}
head = temp;
return head;
}
void print_data(struct node *head){
if(head == NULL){
printf("Linked list is empty");
}
struct node *ptr = head;
while(ptr != NULL){
printf("%d ", ptr->data);
ptr = ptr->next;
}
}
