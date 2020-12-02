#include <stdio.h>
#include <stdlib.h>

int	combine(int *tab);
int	*str_to_int_array(char *str, int *nbr, int size);
int	*my_replace(char *str, char param, char sub);
int	see_params(int *params, int size);

int	main(int argc, char **argv)
{
	int *tab = (int *)malloc(sizeof(int) * 24 * 6);
	int *nbr = (int *)malloc(sizeof(int) * 16);
	int *map = (int *)malloc(sizeof(int) * 16);

	str_to_int_array(argv[1], nbr, 16);
	if(!(see_params(nbr, (sizeof(nbr)/sizeof(int)))))
		exit(0);
	combine(tab);
}