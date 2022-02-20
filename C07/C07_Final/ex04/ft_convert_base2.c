int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putnbr_base2(int nbr, char *base)
{
	int	i;
	int	base_len;
	long	n;


