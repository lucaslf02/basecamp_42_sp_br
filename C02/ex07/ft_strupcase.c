char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i++] != '\0')
		if ((str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			str[i - 1] = str[i - 1] - 32;
	return (str);
}
