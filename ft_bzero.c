#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
// #include <stdio.h>
// int main ()
// {
// 	unsigned char s[] = "miau";
// 	printf("%s\n", s);
// 	ft_bzero(s,5);
// 	printf("%s\n", s);
// }