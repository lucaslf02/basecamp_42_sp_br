/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 22:11:14 by llemes-f          #+#    #+#             */
/*   Updated: 2020/12/02 15:18:04 by llemes-f         ###   ########.fr       */
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
	(void)argc;
	(void)argv;
	ft_putstr(argv[0]);
	ft_putstr("\n");
}
