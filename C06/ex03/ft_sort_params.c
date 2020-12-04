/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 23:36:39 by llemes-f          #+#    #+#             */
/*   Updated: 2020/12/01 23:59:36 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i++] != '\0') || (s2[i - 1] != '\0'))
		if ((s1[i - 1] - s2[i - 1]) != 0)
			return (s1[i - 1] - s2[i - 1]);
	return (0);
}

void	ft_sort_int_tab(char **tab, int size)
{
	char	*aux;
	int		i;
	int		j;
	int		min;

	i = -1;
	while (i++ < (size - 1))
	{
		min = i;
		j = i - 1;
		while (j++ < (size - 1))
			if (ft_strcmp(tab[j], tab[min]) < 0)
				min = j;
		aux = tab[i];
		tab[i] = tab[min];
		tab[min] = aux;
	}
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i++] != '\0')
		write(1, &str[i - 1], 1);
}

int		main(int argc, char **argv)
{
	int		i;
	char	**tab;

	if (argc <= 1)
		return (0);
	(void)argv;
	(void)argc;
	i = 0;
	tab = argv + 1;
	ft_sort_int_tab(tab, (argc - 1));
	while (i < argc - 1)
	{
		ft_putstr(tab[i]);
		ft_putstr("\n");
		i++;
	}
}
