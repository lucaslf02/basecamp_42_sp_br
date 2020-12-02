#include <unistd.h>

int		ft_strlen(char *str);
void	ft_putnbr(int nbr, char *base);
int		valida(char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int aux;
	int nbase;
	int multiple;
	int i;

	if (!valida(base))
		return ;
	nbase = ft_strlen(base);
	aux = nbr;
	multiple = 1;
	while ((aux /= nbase) >= 1)
		multiple++;
	while (multiple)
	{
		i = 0;
		aux = nbr;
		while (i++ < multiple - 1)
			aux /= nbase;
		ft_putnbr((aux %= nbase), base);
		multiple--;
	}
}

void	ft_putnbr(int nbr, char *base)
{
	if (nbr <= ft_strlen(base))
		write(1, &base[nbr], 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		valida(char *base)
{
	char *aux_base;

	if (ft_strlen(base) <= 1)
		return (0);
	aux_base = base;
	while (*aux_base != '\0')
	{
		if (*aux_base == '-' || *aux_base == '+')
			return (0);
		aux_base++;
	}
	while (*base != '\0')
	{
		aux_base = base;
		while (*aux_base++ != '\0')
			if (*aux_base == *base)
				return (0);
		base++;
	}
	return (1);
}
