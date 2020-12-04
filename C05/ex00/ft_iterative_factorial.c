/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 01:48:49 by llemes-f          #+#    #+#             */
/*   Updated: 2020/12/03 02:40:01 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;
	int fat;

	if (nb < 0)
		return (0);
	i = 1;
	fat = 1;
	while (nb >= 1)
		fat *= nb--;
	return (fat);
}
