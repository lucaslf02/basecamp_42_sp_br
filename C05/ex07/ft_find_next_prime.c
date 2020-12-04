/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 18:40:59 by llemes-f          #+#    #+#             */
/*   Updated: 2020/12/04 03:50:42 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	nb++;
	while (nb <= 2147483647)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3 || nb == 2147483647)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	i = 3;
	while ((i * i) <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i += 2;
	}
	return (1);
}

#include <stdio.h>

int main(void)
{
	int n = 15;
	printf("O proximo numero primo partir de %d é: %d \n", n, ft_find_next_prime(n));
}