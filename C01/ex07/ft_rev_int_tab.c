void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int aux_tab;

	i = 0;
	aux_tab = 0;
	while (i < (size / 2))
	{
		aux_tab = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = aux_tab;
		i++;
	}
}
