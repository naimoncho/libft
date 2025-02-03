#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	find;
	unsigned char	*str;

	find = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == find)
			return (str + i);
		i ++;
	}
	if (find == '\0')
		return (0);
	return (NULL);
}
