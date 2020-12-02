#include <unistd.h>

void	write_comb(int i, int j, int k, int l);

void	ft_print_comb2(void)
{
	int i;
	int j;
	int k;
	int l;

	i = '/';
	while (i++ < '9')
	{
		j = '/';
		while (j++ < '9')
		{
			k = (j > i && j == '9') ? i + 1 : i;
			l = (j > i && j == '9') ? '/' : j;
			while (l++ < '9' && k <= '9')
			{
				write_comb(i, j, k, l);
				if (l == '9')
				{
					l = '0' - 1;
					k++;
				}
			}
		}
	}
}

void	write_comb(int i, int j, int k, int l)
{
	write(1, &i, 1);
	write(1, &j, 1);
	write(1, " ", 1);
	write(1, &k, 1);
	write(1, &l, 1);
	if (!(i == '9' && j == '8' && k == '9' && l == '9'))
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
