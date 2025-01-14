#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char find;
	char *str;

	find = (unsigned char)c;
	str = (char *)s;
	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == find)
			return (str + i);
		i ++;
	}
	if (find == '\0')
		return(0);
	return (NULL);
}
// int main()
// {
//     char str[] = "Hello, world!";
//     printf("Search 'o': %s\n", (char *)ft_memchr(str, 'o', 10));
//     printf("Search 'x': %s\n", (char *)ft_memchr(str, 'x', 10));
//     printf("Search '\\0': %s\n", (char *)ft_memchr(str, '\0', sizeof(str)));
//     return 0;
// }