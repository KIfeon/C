#include <unistd.h>

void	ipssi_rev_int_tab(int *tableau, int taille)
{
	int	debut;
	int	fin;
	int	temp;

	debut = 0;
	fin = taille -1;
	while (debut < fin)
	{
		temp = tableau[debut];
		tableau[debut] = tableau[fin];
		tableau[fin] = temp;
		debut++;
		fin--;
	}
}
