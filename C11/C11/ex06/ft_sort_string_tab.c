/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 17:21:34 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/24 09:54:35 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;
	int				diff;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			break ;
		i++;
	}
	diff = (unsigned int)s1[i] - (unsigned int)s2[i];
	return (diff);
}

void	ft_swapp(char **tab1, char **tab2)
{
	char	*temp;

	temp = *tab1;
	*tab1 = *tab2;
	*tab2 = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;

	j = 0;
	while (tab[j] != 0)
	{
		i = 0;
		while (tab[i + 1] != 0)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
				ft_swapp(&tab[i], &tab[i + 1]);
			i++;
		}
		j++;
	}
}
