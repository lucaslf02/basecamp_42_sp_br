char	which_is(char c);
int		count_numbers(char *str);
void	calculate(int *acc, int *multiple, int nbr);
int		change_signal(char c);

int		ft_atoi(char *str)
{
	int acc;
	int signal;
	int get_nbr;
	int multiple;

	signal = 1;
	get_nbr = 0;
	multiple = count_numbers(str);
	acc = 0;
	while (*str != '\0')
	{
		if ((which_is(*str) == 'o' || which_is(*str) == 'l') && get_nbr == 0)
			break ;
		if (which_is(*str) == 's' && get_nbr == 0)
			signal *= change_signal(*str);
		if (which_is(*str) == 'n')
		{
			calculate(&acc, &multiple, (*str - 48));
			get_nbr = 1;
		}
		else if (which_is(*str) != 'n' && get_nbr == 1)
			break ;
		str++;
	}
	return (acc * signal);
}

void	calculate(int *acc, int *multiple, int nbr)
{
	*acc += nbr * (*multiple);
	*multiple /= 10;
}

int		count_numbers(char *str)
{
	int count;
	int multiple;

	count = 0;
	multiple = 1;
	while (*str != '\0')
	{
		if (which_is(*str) == 'n')
			count++;
		if ((which_is(*str++) != 'n') && count)
			break ;
	}
	while (--count)
		multiple *= 10;
	return (multiple);
}

int		change_signal(char c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (-1);
	return (0);
}

char	which_is(char c)
{
	int space;

	space = (c == ' ' || c == '\f' || c == '\n' || c == '\r'
	|| c == '\t' || c == '\v');
	if ((c >= '0' && c <= '9'))
		return ('n');
	else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return ('l');
	else if (c == '-' || c == '+')
		return ('s');
	else if (space)
		return ('e');
	else
		return ('o');
}
