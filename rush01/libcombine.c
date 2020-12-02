#include <unistd.h>
#include <stdio.h>

struct	s_insert	{
	int i;
	int j;
	int k;
	int l;
};

int g_count = 0;
struct s_insert g_put_combine;

int		valida_seq(int i, int j, int k, int l);
void	put_array(int *tab);
void	line_persp(int *tab);

void	combine(int *tab)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	while (i++ < 4)
	{
		j = 0;
		while (j++ < 4)
		{
			k = 0;
			while (k++ < 4)
			{
				l = 0;
				while (l++ < 4)
					if (valida_seq(i, j, k, l))
						put_array(tab);
			}
		}
	}
}

int		valida_seq(int i, int j, int k, int l)
{
	if (i == j || i == k || i == l || j == k || j == l || k == l)
		return (0);
	g_put_combine.i = i;
	g_put_combine.j = j;
	g_put_combine.k = k;
	g_put_combine.l = l;
	return (1);
}

void	put_array(int *tab)
{
	*((tab + g_count * 6) + 0) = 0;
	*((tab + g_count * 6) + 1) = g_put_combine.i;
	*((tab + g_count * 6) + 2) = g_put_combine.j;
	*((tab + g_count * 6) + 3) = g_put_combine.k;
	*((tab + g_count * 6) + 4) = g_put_combine.l;
	*((tab + g_count * 6) + 5) = 0;
	g_count++;
}

void set_persp(int *tab)
{
	int i;
	int *line;

	i = 0;
	while(i < 24)
	{
		line = *((tab + i * 6));
		
		i++;	
	}
}

void 	line_persp(int *tab)
{
	int i;
	int aux;
	int bigger;

	i = 1;
	aux = 0;
	bigger = 0;
	while (i < 5)
	{
		if (aux == 0)
			aux++;
		else if (tab[i] > tab[bigger])
		{
			aux++;
			bigger = tab[bigger];
		}
		i++;
	}
	tab[sentido] = aux;
}