#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	convert(char *str, int i)
{
	int	res;

	res = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + str[i] - 48;
		i++;
	}
	return (res);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;
	int	min;

	i = 0;
	res = 0;
	min = 0;
	sign = 1;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			min++;
		i++;
	}
	if (min % 2)
		sign = -1;
	res = convert(str, i);
	return (res * sign);
}

int	main(void)
{
	char *str1 = " ---+---+1234ab567"; // Leading whitespace
	char *str2 = " \t-678"; // Leading whitespace and negative number
	char *str3 = "42abc"; // Number followed by non-digit characters

	printf("Testing ft_atoi:\n");
	printf("String: \"%s\", Result: %d\n", str1, ft_atoi(str1));
	printf("String: \"%s\", Result: %d\n", str2, ft_atoi(str2));
	printf("String: \"%s\", Result: %d\n", str3, ft_atoi(str3));

	return (0);
}
