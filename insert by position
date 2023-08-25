#include<stdio.h>
#include<stdlib.h>
struct node {
int data;
struct node *link;
}*head, *current;
void create_node(int data);
void print_data(struct node *head);
void add_at_position(struct node *head, int position, int middle);
int main(){
int node, data;
head = NULL;
printf("Enter the number of node: ");
scanf("%d", &node);
for(int i = 1; i <= node; i++){
printf("Enter the data for node %d : ", i);
scanf("%d", &data);
create_node(data);
}
print_data(head);
int position,middle;
printf("\nAdd position : ");
scanf("%d", &position);
printf("\nAdd data at this position :");
scanf("%d", &middle);
add_at_position(head, position, middle);
print_data(head);
return 0;
}
void create_node(int data){
struct node *new_node = malloc(sizeof(struct node));
new_node->data = data;
new_node->link = NULL;
if(head == NULL){
head = new_node;
current = new_node;
}else {
current->link = new_node;
current = new_node;
}
}
void add_at_position(struct node *head, int position, int middle){
struct node *ptr = head;
struct node *temp = malloc(sizeof(struct node));
temp->data = middle;
temp->link = NULL;
position--;
while(position != 1){
ptr = ptr->link;
position--;
}
temp->link = ptr->link;
ptr->link = temp;
}
void print_data(struct node *head){
if(head == NULL){
printf("Linked list is empty");
}
struct node *ptr = head;
while(ptr != NULL){
printf("%d ", ptr->data);
ptr = ptr->link;
}
}
