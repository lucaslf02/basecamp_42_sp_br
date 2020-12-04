/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 16:21:17 by llemes-f          #+#    #+#             */
/*   Updated: 2020/12/03 17:30:57 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	*aux_tab;

	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(int) * (max - min));
	aux_tab = tab;
	while (min < max)
		*aux_tab++ = min++;
	return (tab);
}
