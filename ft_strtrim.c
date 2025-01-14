#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	size_t x;
	char *miau;
	
	i = 0;
	if (!s1 || !set)
		return (0);
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i ++;
	while (s1[j] && ft_strchr(set, s1[j - 1]))
		j --;
	miau = malloc(j - i + 1);
	if (!miau)
		return (NULL);
	while (i <= j)
	{
		miau[x] = s1[i];
		i ++;
		x ++;
	}
	miau[i] = '\0';
	return (miau);
}
// int main()
// {
// 	char *s1 = "   hola que tal   ";
// 	char *set = NULL;
// 	printf("%s\n", ft_strtrim(s1, set));
// 	return 0;
// }