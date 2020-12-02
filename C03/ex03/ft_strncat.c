int		ft_strlen(char *str);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *aux;

	aux = dest + ft_strlen(dest);
	while (*src != '\0' && nb--)
		*aux++ = *src++;
	*aux = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

#include <string.h>
#include <stdio.h>

int	main()
{
	char str1[7] = "Lucas ";
	char str2[6] = "Lemes";
	
	strncat(str1, str2, 2);
	printf("O retorno é (ft):%s\n", str1);

}