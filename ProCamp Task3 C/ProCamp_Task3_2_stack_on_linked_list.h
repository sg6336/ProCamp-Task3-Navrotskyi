// Task3_2:
// Write a stack library based on a linked list. Minimum set of
// operations: push(), pop()
/*
* void main_ProCamp_Task3_2_stack_on_linked_list(); // main() for Task3_2
* void push(int data); // Utility function to add an element data in the stack insert at the beginning
* void pop(); // Utility function to pop top element from the stack
* void display(); // Function to print all the elements of the stack
*/

#pragma once

#include <stdio.h>
#include <stdlib.h>

// Declare linked list node
struct Node
{
    int data;
    struct Node* link;
};

struct Node* top;

void main_ProCamp_Task3_2_stack_on_linked_list(void);
void push(int);
void pop();
void display();