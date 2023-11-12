#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - increase the size of malloc
 * @ptr: Pointer 
 * @old_size: Size of the allocated memory block
 * @new_size: New size of the memory block
 *
 * Return: Pointer to the reallocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new;
    char *p_ptr, *p_new;
    int i;
    if (new_size == old_size)
        return (ptr);
    if (ptr == NULL)
    {
        new = malloc(new_size);
        if (new == NULL)
            return (NULL);
        return (new);
    }
    if (new_size == 0 && ptr != NULL)
    {
        free(ptr);
        return (NULL);
    }
    new = malloc(new_size);
    if (new == NULL)
        return (NULL);
    p_new = new;
    p_ptr = ptr;
    for (i = 0; i < old_size; i++)
    {
        p_new[i] = p_ptr[i];
    }
    free(ptr);
    return (new);
}
