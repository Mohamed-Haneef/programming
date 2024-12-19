#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

typedef struct node Node;

Node* create_node(int data) {
    Node* c_node = malloc(sizeof(Node)); 
    if (!c_node) {  
        printf("Memory allocation failed!\n");
        exit(1);  
    }
    c_node->data = data;
    c_node->next = NULL;
    
    printf("Created node at address %p with data = %d\n", (void*)c_node, c_node->data);
    return c_node;  
}

void insert_at_first(Node** head, int data) {
    printf("insert_at_first: head = %p, head value = %p\n", (void*)head, (void*)*head);
    
    Node* new_node = create_node(data);  
    new_node->next = *head;  
    *head = new_node; 

    printf("After insert_at_first: head = %p, new head value = %p, new_node = %p\n", (void*)head, (void*)*head, (void*)new_node);
}

void insert_at_last(Node** head, int data) {
    printf("insert_at_last: head = %p, head value = %p\n", (void*)head, (void*)*head);
    
    Node* new_node = create_node(data);  
    if (*head == NULL) {
        *head = new_node;  
        printf("List was empty, inserted new node as head. head = %p, new_node = %p\n", (void*)*head, (void*)new_node);
        return;
    }

    Node* temp = *head;
    printf("insert_at_last: temp = %p, temp value = %p\n", (void*)temp, (void*)temp);

    while (temp->next != NULL) {  
        printf("While loop: temp = %p, temp->data = %d, temp->next = %p\n", (void*)temp, temp->data, (void*)temp->next);
        temp = temp->next;
    }
    
    temp->next = new_node;  
    printf("After loop: temp = %p, temp->next = %p\n", (void*)temp, (void*)temp->next);
}

void print_list(Node* head) {
    Node* temp = head;
    printf("Printing list: head = %p\n", (void*)head);
    
    while (temp != NULL) {  
        printf("temp = %p, temp->data = %d, temp->next = %p\n", (void*)temp, temp->data, (void*)temp->next);
        printf("%d", temp->data);
        if (temp->next != NULL) {  
            printf(" -> ");
        }
        temp = temp->next;
    }
    printf(" -> NULL\n");
}

int main() {
    Node* head = NULL;  
    printf("Initial head = %p\n", (void*)head);
    
    insert_at_first(&head, 10);  
    insert_at_first(&head, 20);  
    insert_at_last(&head, 50);   

    print_list(head);  
    
    return 0;
}
