/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:36:31 by llemes-f          #+#    #+#             */
/*   Updated: 2020/12/02 22:54:16 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	raiz(int nb, int pn);

int	ft_sqrt(int nb)
{
	return (raiz(nb, 1));
}

int	raiz(int nb, int pn)
{
	int power;

	power = pn * pn;
	if (pn > 46342 || power > nb)
		return (0);
	if (power == nb)
		return (pn);
	return (raiz(nb, (pn + 1)));
}
