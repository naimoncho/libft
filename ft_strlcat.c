#include "libft.h"

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int d_len;

	i = 0;
	d_len = 0;
	while (dest[d_len] != '\0')
	{
		d_len ++;
	}
	while (d_len + i + 1 < size)
	{
		dest[d_len + i] = src[i];
		if (src[i] == '\0')
			return (ft_strlen(src) + d_len);
		i ++;
	}
	dest[d_len + i] = '\0';
	return (ft_strlen(src) + d_len);
}
// int main()
// {
// 	char dest[20] = "hola";
// 	char src[] = "adios";
// 	printf("%d\n", ft_strlcat(dest, src, 7));
// 	printf("%s\n", dest);
// }