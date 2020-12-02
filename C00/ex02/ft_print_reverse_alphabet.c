#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int letter;

	letter = '{';
	while (letter-- > 'a')
	{
		ft_putchar(letter);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
