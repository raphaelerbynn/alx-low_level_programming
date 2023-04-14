#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previously allocated with malloc
 * @old_size: size of the allocated space for ptr
 * @new_size: new size of the memory block
 *
 * Return: pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return NULL;
    }

    if (ptr == NULL)
    {
        return malloc(new_size);
    }

    if (new_size == old_size)
    {
        return ptr;
    }

    void *new_ptr;
    unsigned int min_size = (old_size < new_size) ? old_size : new_size;

    new_ptr = malloc(new_size);
    if (new_ptr == NULL)
    {
        return NULL;
    }

    memcpy(new_ptr, ptr, min_size);
    free(ptr);

    return new_ptr;
}
