#include <unistd.h>

void	ipssi_putnbr(int nb)
{
	char	rpz;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ipssi_putnbr(nb / 10);
	}
	rpz = (nb % 10) + '0';
	write(1, &rpz, 1);
}
