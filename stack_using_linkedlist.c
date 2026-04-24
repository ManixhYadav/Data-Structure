#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* top = NULL;

void push(int x) {
    struct node* temp = malloc(sizeof(struct node));
    temp->data = x;
    temp->next = top;
    top = temp;
}

void pop() {
    if (top == NULL)
        printf("Underflow\n");
    else {
        struct node* temp = top;
        printf("Deleted: %d\n", temp->data);
        top = top->next;
        free(temp);
    }
}