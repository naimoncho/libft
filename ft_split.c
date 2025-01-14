#include "libft.h"

size_t words (const char *sentence)
{
	size_t i;
	size_t length;
	size_t count;
	size_t last;

	i = 0;
	length = ft_strlen(sentence);
	count = 1;
	last = 0;
	while (i <= length)
	{
		i ++;
		if (sentence[i] == ' ')
			if (last == 0)
				count ++;
			else
				last = 1; 
		else
			last = 0;
	}
	return (count);
}
// int main() 
// { 
// 	char str[30] = "a posse ad esse";
// 	printf("Words = %i\n", words(str));
// }
char **ft_split(char const *s, char c)
{
	size_t i;
	size_t begin;
	size_t finish;
	char **split;

	if (!s || !c)
		return (0);
	i = 0;
	begin = 0;
	finish = 0;
	while (i < words(s))
	{
		while (s[begin] == c)
			begin ++;
		finish = begin;
		while (s[finish] != c && s[finish])
			finish ++;
		split = ft_substr(s, begin, (finish - begin));
		begin = finish;
		i ++;
	}
	split[i] = '\0';
	return (split);
}
