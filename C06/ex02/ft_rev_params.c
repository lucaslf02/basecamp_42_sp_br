/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 23:20:15 by llemes-f          #+#    #+#             */
/*   Updated: 2020/12/01 23:35:13 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i++] != '\0')
		write(1, &str[i - 1], 1);
}

int		main(int argc, char **argv)
{
	int j;

	(void)argv;
	(void)argc;
	j = argc;
	while (j > 1)
	{
		ft_putstr(argv[j - 1]);
		ft_putstr("\n");
		j--;
	}
}
