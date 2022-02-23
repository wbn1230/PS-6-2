int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	res;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && '0' <= str[i] && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
