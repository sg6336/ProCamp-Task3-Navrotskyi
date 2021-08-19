// Task3_1:
// Write a function that copies a string to a new one dynamically
// allocated. The function should return the new string address of
// NULL in case of error. Avoid using the standard functions from
// string.h

#include "ProCamp_Task3_1_copy_string.h"

void main_ProCamp_Task3_1_copy_string()
{
    printf("Task3_1: copies a string without string.h \n");
    printf("Start \n\n");

    char string1[] = "Hello";
    int charcount = sizeof(string1); // with terminating '\0'
    char* string2 = malloc(charcount * sizeof(char));

    string2 = str_cpy(string2, string1);

    if (string1 != NULL || string2 != NULL) {
        printf("string1: address=%p \t value=%s \n\n", string1, string1);
        printf("string2: address=%p \t value=%s \n\n", string2, string2);
    }
    else
    {
        printf("NULL error");
    }

    free(string2);

    printf("\n");
    printf("Task3_1: copies a string without string.h \n");
    printf("Stop \n\n");
}

char* str_cpy(char* dest, const char* src)
{
    if (dest == NULL || src == NULL) 
        return NULL;

    char* tmp = dest;

    while ((*dest++ = *src++) != '\0')
        /* nothing */;
    return tmp;
}
