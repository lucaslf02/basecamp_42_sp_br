int	ft_putchar(char c);
int	jump_line(int x, int pos);
int	print_result(int line, int column, int y, int x);

int	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			print_result(i, j, y, x);
			j++;
		}
		i++;
	}
	return (0);
}

int	print_result(int line, int column, int y, int x)
{
	int pos;

	pos = (line * x) - (x - column);
	if ((pos == 1) || ((pos == x * y) && y > 1 && x > 1))
	{
		ft_putchar('A');
	}
	else if (pos == ((x * y) - (x - 1)) || pos == x)
	{
		ft_putchar('C');
	}
	else if ((pos > 1 && pos < x) || (pos > x * y - (x - 1) && pos < (x * y)))
	{
		ft_putchar('B');
	}
	else if (pos == ((line * x) - (x - 1)) || (pos % x) == 0)
	{
		ft_putchar('B');
	}
	else
	{
		ft_putchar(' ');
	}
	jump_line(x, pos);
	return (0);
}

int	jump_line(int x, int pos)
{
	if (pos == x || (pos % x) == 0)
	{
		ft_putchar('\n');
	}
	return (0);
}
