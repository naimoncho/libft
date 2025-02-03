#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	int				result;

	i = 0;
	result = 0;
	if (n <= 0)
		return (0);
	while (i < (unsigned int)n)
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
		{
			result = (unsigned char)s1[i] - (unsigned char)s2[i];
			return (result);
		}
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		i ++;
	}
	return (0);
}
