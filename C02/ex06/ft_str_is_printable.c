int	ft_str_is_printable(char *str)
{
	int i;
	int printable;

	i = 0;
	printable = 1;
	while (str[i++] != '\0' && printable == 1)
		if (!(str[i - 1] > 31))
			printable = 0;
	return (printable);
}
