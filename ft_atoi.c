#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i ++;
	if (str[i] == '+')
	{
		sign *= sign;
		i ++; 
	}
	if ( str[i] == '-')
	{
		sign *= -1;
		i ++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - 48;
		i ++;
	}
	return (result * sign);
}
