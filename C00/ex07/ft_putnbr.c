#include <unistd.h>

void	ft_putnbr(int nb)
{
	int				multiple;
	int				number;
	unsigned int	aux;
	unsigned int	aux_nb;

	aux = nb;
	if (nb < 0)
	{
		aux = nb * (-1);
		write(1, &"-", 1);
	}
	multiple = 1;
	aux_nb = aux;
	while ((aux_nb /= 10) > 0)
		multiple *= 10;
	while (multiple)
	{
		number = ((aux / multiple) + 48);
		write(1, &number, 1);
		aux %= multiple;
		multiple /= 10;
	}
}
