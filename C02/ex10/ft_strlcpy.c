unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char *auxd;
	char *auxe;
	char *auxs;

	auxd = dest;
	auxe = dest + size;
	auxs = src;
	while (*auxs != '\0' && auxd < auxe)
		*auxd++ = *auxs++;		
	if (auxd < auxe)
		*auxd = '\0';
	else if (size > 0)
		auxd[-1] = '\0';
	while (*auxs != '\0')
		auxs++;
	return (auxs - src - 1);
}

#include  <stdio.h>

int main()
{
   char var1[2];
   char var2[]= "Lucas Leme";
   unsigned int n;
   n = ft_strlcpy(var1, var2, );
   printf("hello %s\n", var1);
   printf("n: %d\n", n);

} 