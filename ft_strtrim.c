#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	x;
	char	*miau;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i ++;
	while (j > i && ft_strchr(set, s1[j - 1]))
		j --;
	miau = malloc(j - i + 1);
	if (!miau)
		return (NULL);
	x = 0;
	while (i < j)
	{
		miau[x] = s1[i];
		i ++;
		x ++;
	}
	miau[x] = '\0';
	return (miau);
}
