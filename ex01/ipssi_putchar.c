#include <unistd.h>

void	ipssi_putchar(void)
{
	char	c;

	c = 'A';
	write(1, &c, 1);
}
