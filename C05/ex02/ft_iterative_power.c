/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 11:51:28 by llemes-f          #+#    #+#             */
/*   Updated: 2020/12/04 02:38:23 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	unsigned int result;

	result = 1;
	if (power < 0)
		return (0);
	while (power-- > 0)
		result *= nb;
	return (result);
}
