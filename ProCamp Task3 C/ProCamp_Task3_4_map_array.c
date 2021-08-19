// Task3_4:
// Write the "map" function that receives an array of items, its size,
// and a function to apply individually to each item of the array.
// "map" could modify existing array or return a new one

#include "ProCamp_Task3_4_map_array.h"

void main_ProCamp_Task3_4_map_array()
{
    printf("Task3_4: \"map\" could modify existing array \n");
    printf("Start \n\n");

    int array[5] = { 0, 1, 2, 3, 4 };
    int length = sizeof(array)/sizeof(array[0]);

    printf("\narray befor map: \t");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }

    map(array, length, add);

    printf("\narray after map: \t");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n\n");
    printf("Task3_4: \"map\" could modify existing array \n");
    printf("Stop \n\n");
}

void map(int array[], int length, int (*op)(int, int))
{
    for (int i = 0; i < length; i++)
        array[i] = op(array[i], 1);
}

int add(int x, int y)
{
    return x + y;
}