int	ft_str_is_lowercase(char *str)
{
	int i;
	int only_lower;

	i = 0;
	only_lower = 1;
	while (str[i++] != '\0' && only_lower == 1)
		if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			only_lower = 0;
	return (only_lower);
}
