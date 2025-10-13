void	ipssi_swap(int *a, int *b)
{
	int	temp;

	*a = 1;
	*b = 2;
	temp = *a;
	*a = *b;
	*b = temp;
}
