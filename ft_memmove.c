#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *destiny;
	unsigned char *source;

	destiny = (unsigned char *)dst;
	source = (unsigned char *)src;
	i = 0;
	if (destiny > source && destiny < source + len)
	{
		while (len--)
			destiny[len] = source[len];
	}
	else 
	{
		while (i < len)
		{
			destiny[i] = source[i];
			i ++;
		}
	}
	return (dst);
}
// int main()
// {
// 	char src[] = "miau";
// 	char dst[8];
// 	char dst1[8];
// 	ft_memmove(dst + 2, src, 2);
// 	printf("mi ft_memmove: [%s]\n", dst);
// 	memmove(dst1 + 2, src, 2);
// 	printf("la ft_memmove normal: [%s]\n", dst1);
// 	return 0;
// }