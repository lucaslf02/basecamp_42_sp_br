int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	ft_strcpy(dest + ft_strlen(dest), src);
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

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i++] != '\0')
		dest[i - 1] = src[i - 1];
	dest[i - 1] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>

int	main()
{
	char str1[7] = "Lucas ";
	char str2[20] = "          Lemes";
	
	ft_strcat(str1, str2);
	printf("O retorno é (ft):%s\n", str1);

}