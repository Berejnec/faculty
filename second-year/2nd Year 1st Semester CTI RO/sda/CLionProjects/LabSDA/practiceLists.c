#include <stdio.h>
#include <stdlib.h>
int node_counter = 0;

typedef struct node {
    int data;
    struct node *next;
} Node;

void push(Node** head, int new_data) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = (*head);
    (*head) = new_node;
    node_counter++;
}

void print_list(Node* head) {
    while(head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int countNodes(Node* head) {
    int count = 0;
    while(head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

void deleteMiddle(Node *head) {
    int middle = node_counter / 2;

    while(middle-- > 1) {
        head = head->next;
    }
    head->next = head->next->next;
}

void addToEnd(Node** head, int new_data) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    Node* last = *head;
    new_node->data = new_data;
    new_node->next = NULL;

    if(*head == NULL) {
        *head = new_node;
        return;
    }
    while(last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
    node_counter++;
}

//void deleteEvenNumbers(Node **head) {
//    Node* temp = *head;
//    Node* previous;
//
//    while(temp != NULL) {
//        if(temp->data % 2 == 0) {
//            *head = temp->next;
//            free(temp);
//        }
//    }
//}

int f(Node* p) {
    return ((p == NULL) || (p->next == NULL) || ((p->data <= p->next->data) && (f(p->next))));
}

void print_rev(Node *head) {
    if(head == NULL) {
        return;
    }
    print_rev(head->next);
    printf("%d ", head->data);
}
int main() {
    Node* head = NULL;
//    push(&head, 1);
//    push(&head, 2);
//    push(&head, 3);
    addToEnd(&head,10);
    addToEnd(&head, 8);
    addToEnd(&head, 5);
    print_list(head);
//    deleteMiddle(head);
//    deleteEvenNumbers(head);
    print_list(head);
    printf("%d\n", f(head));
    print_rev(head);

}

