#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

typedef struct node Node;

Node* create_node(int data){
    Node* head = malloc(sizeof(Node));
    if(!head){
        printf("Memory Allocation Failed \n");
        exit(1);
    }
    head->data = data;
    head->left = NULL;
    head->right = NULL;
    return head;
}

void insert(Node** root, int data){
    if(*root == NULL){
        Node* new_node = create_node(data);
        *root = new_node;
        printf("Node created\n");
        return;
    }
    if(data < (*root)->data){
        printf("left insertion\n");
        insert(&(*root)->left, data);
    }else if(data > (*root)->data){
        printf("right insertion\n");
        insert(&(*root)->right, data);
    }else if(data == (*root)->data){
        printf("duplicate entries will be skipped !!\n");
        return;
    }
}

void print_tree(Node ** tree, int level){
    if(*tree == NULL){
        printf("No more elements");
    }
    for(int i=0; i<=level; i++){
        printf(" ");
    }
    printf("%d \n", (*tree)->data);
    if((*tree)->left != NULL){
        print_tree(&(*tree)->left, level+1);
    }
    if((*tree)->right != NULL){
        print_tree(&(*tree)->right, level+1);
    }
}
int main(){
    Node* root = NULL;
    insert(&root, 10);
    insert(&root, 240);
    insert(&root, 2);
    insert(&root, 4);
    insert(&root, 50);
    insert(&root, 34);
    insert(&root, 56);
    print_tree(&root, 0);
    return 0;
}