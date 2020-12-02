int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i++] != '\0') || (s2[i - 1] != '\0'))
		if ((s1[i - 1] - s2[i - 1]) != 0)
			return (s1[i - 1] - s2[i - 1]);
	return (0);
}

#include <stdio.h>

int	main()
{
	char str1[] = "  11  ";
	char str2[] = "  12";
	int ret;

	ret = ft_strcmp(str1, str2);
	printf("O retorno é (ft): %d \n", ret);
}