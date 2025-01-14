#include "libft.h"

char *ft_strdup(const char *s1)
{
	int i;
	char *copy;

	copy = malloc(ft_strlen(s1) + 1);
	if (copy == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		copy[i] = s1[1];
		i ++;
	}
	copy[i] = '\0';
	return (copy);
}
