// Task3_3:
// Write a queue library based on an array. Minimum set of
// operations: enqueue(), dequeue()
/*
* void main_ProCamp_Task3_3_queue_on_array(); // main() for task3_3
* struct Queue* createQueue(unsigned capacity); // function to create a queue of given capacity. It initializes size of queue as 0
* void enqueue(struct Queue* queue, int item); // Function to add an item to the queue. It changes rear and size
* int dequeue(struct Queue* queue); // Function to remove an item from queue. It changes front and size
* int front(struct Queue* queue); // Function to get front of queue
* int rear(struct Queue* queue); // Function to get rear of queue
* int isFull(struct Queue* queue); // Queue is full when size becomes equal to the capacity
* int isEmpty(struct Queue* queue); // Queue is empty when size is 0
*/

#pragma once

#include <stdio.h>
#include <stdlib.h>

// A structure to represent a queue
struct Queue {
    int front, rear, size;
    unsigned capacity;
    int* array;
};

void main_ProCamp_Task3_3_queue_on_array(void);
struct Queue* createQueue(unsigned);
void enqueue(struct Queue*, int);
int dequeue(struct Queue*);
int front(struct Queue*);
int rear(struct Queue*);
int isFull(struct Queue*);
int isEmpty(struct Queue*);
