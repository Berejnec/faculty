#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int data;
    struct list *urm;
}List;

void print_list(List* head) {
    List* current = head;
    while(current != NULL) {
        printf("%d ", current->data);
        current = current->urm;
    }
}

void push(List **head, int value) {
    List* new_node;
    new_node = (List*) malloc(sizeof(List));

    new_node->data = value;
    new_node->urm = *head;
    *head = new_node;
}

void deleteEven(List **head) {
    List* temp_node = NULL;
    List* current = *head;
    int return_data;

    while(current != NULL) {
        if(current->data % 2 == 0) {
            temp_node = current->urm;
            return_data = temp_node->data;
            current->urm = temp_node->urm;
            free(temp_node);
        }
        current = current->urm;
    }
}

int main() {
    List *head = NULL;
    head = (List*) malloc(sizeof(List));
    head->data = 1;
    head->urm = NULL;
    push(&head,2);
    push(&head, 3);
    push(&head,4);
    push(&head,6);
    push(&head,8);
    push(&head, 10);
    push(&head, 7);
    print_list(head);
    printf("\n");
    deleteEven(&head);
    print_list(head);
}

