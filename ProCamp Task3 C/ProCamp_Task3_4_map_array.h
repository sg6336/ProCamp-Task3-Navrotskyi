// Task3_4:
// Write the "map" function that receives an array of items, its size,
// and a function to apply individually to each item of the array.
// "map" could modify existing array or return a new one
/*
* void main_ProCamp_Task3_4_map_array(); // main() for task3_4
* void map(int array[], int length, int (*op)(int, int)); // Change items of the array
* int add(int x, int y); // some function for "map"
*/

#pragma once

#include <stdio.h>
#include <stdlib.h>

void main_ProCamp_Task3_4_map_array(void);
void map(int array[], int length, int (*op)(int, int));
int add(int, int);
