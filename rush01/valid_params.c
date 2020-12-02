#include <stdio.h>

void	ft_putstr(char *str);
int		valida_param(int front, int back);

int		see_params(int *params, int size)
{
	int i;

	i = -1;
	while (i++ < size - 5)
	{
		if (!(valida_param(params[i], params[i + 4])))
		{
			ft_putstr("Erro!!!\n");
			return (0);
		}
		if (i == 3)
			i = 7;
	}
	return (1);
}

int		valida_param(int front, int back)
{
	int sum;

	sum = front + back;
	if (!(sum >= 3 && sum <= 5))
		return (0);
	if ((front == 4 && back != 1) || (back == 4 && front != 1))
		return (0);
	return (1);
}
