#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int aux;
	int min;

	i = -1;
	aux = 0;
	while (i++ < (size - 1))
	{
		min = i;
		j = i - 1;
		while (j++ < (size - 1))
			if (tab[j] < tab[min])
				min = j;
		aux = tab[i];
		tab[i] = tab[min];
		tab[min] = aux;
	}
}

int	main(void)
{
    int tab[12] = {45,14,8,96,1,25,69,6,9,3,47,89};    
    int size = 12;
	for (int i = 0; i < size; i++)
    {
        printf("%d, ", tab[i]);
    }
    printf("\n");
    ft_sort_int_tab(&tab[0], size);
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", tab[i]);
    }
    printf("\n");
}