char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int unsigned i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>
int		main(void)
{
	char str1[]= "Lucas Lemes";
  	char str2[20];

  	// ft_strncpy ( str2, str1, 10);
	// printf("str2 %s \n", str2);
	strncpy ( str2, str1, 10);
	printf("str2 %s \n", str2);

}