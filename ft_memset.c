#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	size_t i;
	unsigned char *s;

	i = 0;
	s = ((unsigned char *) b);
	while (s[i] != '\0' && i < len)
	{
		s[i] = c;
		i ++;
	}
	return (b);
}
// int main()
// {
// 	char b[6] = "";
// 	int c = 'c';
// 	ft_memset(b, c, 5);
// 	printf ("%s\n", b);
// 	return 0;
// }