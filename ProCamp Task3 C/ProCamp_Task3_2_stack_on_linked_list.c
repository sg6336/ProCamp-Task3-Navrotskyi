// Task3_2:
// Write a stack library based on a linked list. Minimum set of
// operations: push(), pop()

#include "ProCamp_Task3_2_stack_on_linked_list.h"

void main_ProCamp_Task3_2_stack_on_linked_list()
{
    printf("Task3_2: copies a string without string.h \n");
    printf("Start \n\n");

    printf("\n\tpush(11), push(22), push(33), push(44) \n");
    push(11);
    push(22);
    push(33);
    push(44);

    display();

    printf("\n\tpop(), pop() \n");
    pop();
    pop();

    display();

    printf("\n\n");
    printf("Task3_2: copies a string without string.h \n");
    printf("Stop \n\n");
}

void push(int data)
{
    struct Node* temp;
    temp = (struct Node*) malloc(sizeof(struct Node));

    // Check if stack (heap) is full.
    // Then inserting an element would
    // lead to stack overflow
    if (!temp) {
        printf("\nHeap Overflow");
        exit(1);
    }
        
    temp->data = data; // Initialize data into temp data field    
    temp->link = top; // Put top pointer reference into temp link    
    top = temp; // Make temp as top of Stack
}

void pop()
{
    struct Node* temp;

    // Check for stack underflow
    if (top == NULL) {
        printf("\nStack Underflow\n");
        exit(1);
    }
    else {        
        temp = top; // Top assign into temp        
        top = top->link; // Assign second node to top        
        temp->link = NULL; // Destroy connection between first and second        
        free(temp); // Release memory of top node
    }
}

void display()
{
    struct Node* temp;

    // Check for stack underflow
    if (top == NULL) {
        printf("\nStack Underflow\n");
        exit(1);
    }
    else {
        temp = top;
        while (temp != NULL) {            
            printf("%d -> ", temp->data); // Print node data            
            temp = temp->link; // Assign temp link to temp
        }
    }
}