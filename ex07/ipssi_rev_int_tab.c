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

int	main(void)
{
	int	tab[4];
	char	c;

	tab[4] = {1, 2, 3, 4};
	ipssi_rev_int_tab(tab, 4);
	c = tab[0] + '0';
	write(1, &c, 1);
	c = tab[1] + '0';
	write(1, &c, 1);
	c = tab[2] + '0';
	write(1, &c, 1);
	c = tab[3] + '0';
	write(1, &c, 1);
	return (0);
}
