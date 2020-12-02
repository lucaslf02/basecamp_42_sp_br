#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i++] != '\0')
		write(1, &str[i - 1], 1);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *my_replace(char *str, char param, char sub)
{
	int i;

	i = 0;
	while (str[i++] != '\0')
	{
		if(str[i - 1] == param)
			str[i - 1] = sub;
	}
	return (str);
}

int *str_to_int_array(char *str, int *nbr, int size)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (str[i++] != '\n' && j < size)
	{
		if(str[i - 1] >= '0' && str[i - 1] <= '9')	
			nbr[j++] = (str[i - 1] - 48);
	}
	return (nbr);
}