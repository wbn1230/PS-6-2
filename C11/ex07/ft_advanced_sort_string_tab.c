void	ft_swap(char **tab1, char **tab2)
{
	char *tmp;

	tmp = *tab1;
	*tab1 = *tab2;
	*tab2 = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	i;
	int	j;

	i = 0;
	while (tab[i] != 0)
	{
		j = 0;
		while (tab[j + 1] != 0)
		{
			if (tab[j + 1][0] == '\0' || (*cmp)(tab[j], tab[j + 1]) > 0)
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
