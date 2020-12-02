int		ft_str_nbr(char x);

char	*ft_strcapitalize(char *str)
{
	int i;
	int can_upper;

	i = 0;
	can_upper = 1;
	while (str[i++] != '\0')
	{
		if (can_upper == 1 && (str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			str[i - 1] = str[i - 1] - 32;
		else if (can_upper == 0 && (str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
			str[i - 1] = str[i - 1] + 32;
		can_upper = 0;
		if (can_upper == 0 && !(ft_str_nbr(str[i - 1])))
			can_upper = 1;
	}
	return (str);
}

int		ft_str_nbr(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
