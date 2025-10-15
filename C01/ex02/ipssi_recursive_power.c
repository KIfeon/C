int	ipssi_recursive_power(int nb, int puissance)
{
	if (puissance < 0)
		return (0);
	if (puissance == 0)
		return (1);
	return (nb * ipssi_recursive_power(nb, puissance - 1));
}
