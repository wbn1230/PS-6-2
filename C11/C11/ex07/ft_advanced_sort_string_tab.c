/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:24:07 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/24 10:47:40 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swapp(char **tab1, char **tab2)
{
	char	*temp;

	temp = *tab1;
	*tab1 = *tab2;
	*tab2 = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	i;
	int	j;

	j = 0;
	while (tab[j] != 0)
	{
		i = 0;
		while (tab[i + 1] != 0)
		{
			if ((*cmp)(tab[i], tab[i + 1]) > 0)
				ft_swapp(&tab[i], &tab[i + 1]);
			i++;
		}
		j++;
	}
}
