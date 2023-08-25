#include <stdio.h>
#include <stdlib.h>
struct node {
 int data;
 struct node* link;
} *head, *current;
void print_data(struct node* head);
void insert_node(int data);
int main() {
 int n, data;
 head = NULL; // Initialize the head of the linked list to NULL
 printf("Enter the number of nodes: ");
 scanf("%d", &n);
 for (int i = 1; i <= n; i++) {
 printf("Enter the data for node %d: ", i);
 scanf("%d", &data);
 insert_node(data);
 }
 print_data(head);
 // Print the elements of the linked list into an array
 int *arr = malloc(n * sizeof(int));
 if (arr == NULL) {
 printf("Memory allocation failed.\n");
 return 1;
 }
 struct node* ptr = head;
 int index = 0;
 while (ptr != NULL && index < n) {
 arr[index] = ptr->data;
 ptr = ptr->link;
 index++;
 }
 printf("\nElements in the array: ");
 for (int i = 0; i < n; i++) {
 printf("%d ", arr[i]);
 }
 free(arr); // Free the dynamically allocated memory for the array
 return 0;
}
void insert_node(int data) {
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
void print_data(struct node* head) {
 if (head == NULL) {
 printf("Linked list is empty");
 return;
 }
 struct node* ptr = head;
 while (ptr != NULL) {
 printf("%d ", ptr->data);
 ptr = ptr->link;
 }
}
