// Task3_1:
// Write a function that copies a string to a new one dynamically
// allocated. The function should return the new string address of
// NULL in case of error. Avoid using the standard functions from
// string.h
/*
 * void main_ProCamp_Task3_1_copy_string(void); // main() for Task3_1
 * 
 * char* str_cpy(char* dest, const char* src); // Copy a %NUL terminated string
 * @dest: Where to copy the string to
 * @src: Where to copy the string from
 */
#pragma once

#include <stdio.h>
#include <stdlib.h>

void main_ProCamp_Task3_1_copy_string(void);
char* str_cpy(char* dest, const char*);
