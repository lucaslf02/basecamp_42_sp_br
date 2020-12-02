#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int letter;

	letter = '`';
	while (letter++ < 'z')
	{
		ft_putchar(letter);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
