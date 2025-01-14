#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *destiny;
	unsigned char *source;

	destiny = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	while (source[i] != '\0' && i < n)
	{
		destiny[i] = source[i];
		i ++;
	}
	return (dst);
}
// int main()
// {
//     char src[] = "Hola mundo";
//     char dest[20];

//     ft_memcpy(dest, src, strlen(src) + 1);
//     printf("Fuente: %s\n", src);
//     printf("Destino: %s\n", dest);
//     return 0;
// }