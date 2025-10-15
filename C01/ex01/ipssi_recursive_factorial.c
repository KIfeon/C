#include <stdio.h>

int	ipssi_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb > 1)
		return (nb * ipssi_recursive_factorial(nb - 1));
	return (0);
}

int	main(void)
{
	int	nb;
	int	facto;

	nb = 5;
	facto = ipssi_recursive_factorial(nb);
	printf("facto de %d est %d\n", nb, facto);
	return (0);
}
