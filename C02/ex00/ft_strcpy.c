char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i++] != '\0')
		dest[i - 1] = src[i - 1];
	dest[i - 1] = '\0';
	return (dest);
}

