void	ft_ultimate_div_mod(int *a, int *b)
{
	int aux;

	aux = *a / *b;
	*b = *a % *b;
	*a = aux;
}
