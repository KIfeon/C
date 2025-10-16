int	ipssi_atoi(const char *str)
{
	long	resultat;
	int		signe;

	resultat = 0;
	signe = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\r')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signe = signe * -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		resultat = (resultat * 10) + (*str - '0');
		str++;
	}
	return ((int)resultat * signe);
}
