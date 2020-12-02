int				ft_strlen(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	char			*aux_dest;
	char			*aux_src;

	aux_dest = dest;
	aux_src = src;
	i = size;
	while (i-- != 0 && *aux_dest != '\0')
		aux_dest++;
	dest_len = aux_dest - dest;
	i = size - dest_len;
	if (i == 0)
		return (dest_len + ft_strlen(aux_src));
	while (*aux_src != '\0')
	{
		if (i-- != 1)
			*aux_dest++ = *aux_src;
		aux_src++;
	}
	return (dest_len + (aux_src - src));
}

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
