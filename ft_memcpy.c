#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destiny;
	unsigned char	*source;

	destiny = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if (n == 0)
		return (dst);
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		destiny[i] = source[i];
		i ++;
	}
	return (dst);
}
