#include <stdio.h>

int	ipssi_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		i = i * nb;
		nb--;
	}
	return (i);
}

int	main(void)
{
	int	nb;
	int	factorial;

	nb = -11;
	factorial = ipssi_iterative_factorial(nb);
	printf("facto de %d est %d\n", nb, factorial);
	return (0);
}
