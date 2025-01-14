#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i;
	const char *last;
	unsigned char to_find;

	last = NULL;
	to_find = (unsigned char)c;
	if (to_find == '\0')
		return ((char *)s);
	i = 0;
	while (s[i])
	{
		if (s[i] == to_find)
			last = s;
		i ++;
	}
	return ((char *)last);
}
