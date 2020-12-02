#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = '/';
	while (i++ <= '9')
	{
		j = i;
		while ((j++ <= '9') && (j > i))
		{
			k = j;
			while ((k++ < '9') && (k > j))
			{
				ft_putchar(i);
				ft_putchar(j);
				ft_putchar(k);
				if (!(i == '7' && j == '8' && k == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
