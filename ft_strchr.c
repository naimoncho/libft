#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i;
	unsigned char to_find;

	to_find = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == to_find)
			return ((char *)&s[i]);
		i ++;
	}
	if (to_find == '\0')
		return (0);
	return (NULL);
}
// int main()
// {
//     const char *s = "Hello, world!";
    
//     printf("Result (search 'o'): %s\n", ft_strchr(s, 'o'));
//     printf("Result (search 'x'): %s\n", ft_strchr(s, 'x'));
// 	printf("Result (search '\\0'): %s\n", ft_strchr(s, '\0'));
//     return 0;
// }