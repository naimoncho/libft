#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int i;
	
	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] != '\0' && i < (int)dstsize - 1)
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
// int main()
// {
//     const char src[] = "kachau";
//     char *dst = strdup("miaudao");
//     printf ("%zu\n", ft_strlcpy(dst, src, 0));
//     printf ("%s\n", dst);

//     for (int i = 0; dst[i] != '\0'; i++)
//        write(1, &dst[i], 1);
// }   