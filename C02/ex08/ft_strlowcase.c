char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i++] != '\0')
		if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			str[i - 1] = str[i - 1] + 32;
	return (str);
}
