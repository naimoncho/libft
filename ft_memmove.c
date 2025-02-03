#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*destiny;
	unsigned char	*source;

	destiny = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if (destiny > source && destiny < source + len)
	{
		while (len--)
			destiny[len] = source[len];
	}
	else if (dst || src)
	{
		while (i < len)
		{
			destiny[i] = source[i];
			i ++;
		}
	}
	return (dst);
}
