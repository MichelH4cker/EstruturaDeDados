#include "removal.h"

void removeFirstNode(struct Node **head){
    struct Node *node = *head;
    
    // verificar se lista está vazia
    // verificar se o próximo é nulo
    
    free(*head);
    *head = node->next;

}

void removeLastNode(struct Node **head){
    struct Node *node = *head;
    struct Node *previousNode;
    // verificar se a lista está vazia

    while (node->next != NULL){
        previousNode = node;
        node = node->next;
    }

    free(node);
    previousNode->next = NULL;
}


void pop(struct Node **head, int key){
    struct Node *node = *head;
    node = search(&node, key);
    struct Node *deletedNode = node->next;

    node->next = deletedNode->next;
    free(deletedNode); 

}