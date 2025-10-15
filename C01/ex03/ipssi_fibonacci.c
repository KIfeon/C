int	ipssi_fibonacci(int index)
{
	int	a;
	int	b;
	int	c;
	int	deux;

	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	a = 0;
	b = 1;
	deux = 2;
	while (deux <= index)
	{
		c = a + b;
		a = b;
		b = c;
		deux++;
	}
	return (b);
}
