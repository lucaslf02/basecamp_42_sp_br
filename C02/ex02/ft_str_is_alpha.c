int	ft_str_is_alpha(char *str)
{
	int i;
	int only_char;
	int upper;
	int lower;

	i = 0;
	only_char = 1;
	while (str[i++] != '\0' && only_char == 1)
	{
		lower = (str[i - 1] >= 'a' && str[i - 1] <= 'z') ? 1 : 0;
		upper = (str[i - 1] >= 'A' && str[i - 1] <= 'Z') ? 1 : 0;
		if (!lower && !upper)
			only_char = 0;
	}
	return (only_char);
}
