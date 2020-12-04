/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 17:08:04 by llemes-f          #+#    #+#             */
/*   Updated: 2020/12/03 21:38:05 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	*aux_tab;
	int i;

	*range = 0;
	i = 0;
	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(int) * (max - min));
	aux_tab = tab;
	while (min < max)
	{
		*aux_tab++ = min++;
		i++;
	}
	*range = tab;
	return (i);
}
