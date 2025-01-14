#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *copy;

    copy = malloc(nmemb * size);
    if (calloc == '\0')
        return (0);
    ft_bzero(copy, nmemb * size);
    return (copy);
}
