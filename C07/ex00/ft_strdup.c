/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llemes-f <llemes-f@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 13:59:18 by llemes-f          #+#    #+#             */
/*   Updated: 2020/12/03 16:20:16 by llemes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*dup_aux;
	int		len;

	len = ft_strlen(src);
	dup = (char *)malloc(sizeof(char) * len + 1);
	if (dup == NULL)
		return ((char*)NULL);
	dup_aux = dup;
	while (*src != '\0')
	{
		*dup_aux = *src;
		dup_aux++;
		src++;
	}
	*dup_aux = '\0';
	return (dup);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
