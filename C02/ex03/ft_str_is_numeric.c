int	ft_str_is_numeric(char *str)
{
	int i;
	int only_nbr;

	i = 0;
	only_nbr = 1;
	while (str[i++] != '\0' && only_nbr == 1)
	{
		if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
			only_nbr = 0;
	}
	return (only_nbr);
}
