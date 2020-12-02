int	ft_str_is_uppercase(char *str)
{
	int i;
	int only_upper;

	i = 0;
	only_upper = 1;
	while (str[i++] != '\0' && only_upper == 1)
		if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			only_upper = 0;
	return (only_upper);
}
