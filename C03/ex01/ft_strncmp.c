int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	char letter1;
	char letter2;

	while (n-- > 0)
	{
		letter1 = *s1++;
		letter2 = *s2++;
		if (letter1 != letter2)
			return (letter1 - letter2);
		if (letter1 == '\0')
			return (0);
	}
	return (0);
}

#include <string.h>
#include <stdio.h>

int	main()
{
	char str1[] = "abcddd";
	char str2[] = "abc";
	int ret;

	ret = ft_strncmp(str1, str2, 5);
	printf("O retorno é (ft): %d \n", ret);
}