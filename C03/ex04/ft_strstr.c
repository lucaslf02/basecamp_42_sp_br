int		compare(const char *str, const char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if ((*str == *to_find) && compare(str, to_find))
			return (str);
		str++;
	}
	return ("(null)");
}

int		compare(const char *str, const char *to_find)
{
	while (*str != '\0' && *to_find != '\0')
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	return (*to_find == '\0');
}

#include <string.h>
#include <stdio.h>

int	main()
{
	char str1[16] = "Quarenta";

	printf("O retorno é (ft):%s\n", ft_strstr(str1, "Quarenta e Dois"));
	printf("O retorno é (string):%s\n", strstr(str1, "Quarenta e Dois"));
}
