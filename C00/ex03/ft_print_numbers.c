#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
