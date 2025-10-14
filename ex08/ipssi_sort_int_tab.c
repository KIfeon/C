#include <unistd.h>

void	ipssi_sort_int_tab(int *tab, int taille)
{
	int	dernier;
	int	j;

	if (taille <= 1)
		return;
	ipssi_sort_int_tab(tab, taille - 1);
	dernier = tab[taille - 1];
	j = taille - 2;
	while (j >= 0 && tab[j] > dernier)
	{
		tab[j + 1] = tab[j];
		j--;
	}
	tab[j + 1] = dernier;
}
