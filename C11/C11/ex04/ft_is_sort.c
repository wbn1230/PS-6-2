/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:59:21 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/23 20:58:59 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sorted_up(int *tab, int length, int(*f)(int, int))
{
	int	u;

	u = 0;
	while (u < length - 1)
	{
		if (f(tab[u], tab[u + 1]) > 0)
			return (0);
		u++;
	}
	return (1);
}

int	is_sorted_down(int *tab, int length, int(*f)(int, int))
{
	int	d;

	d = 0;
	while (d < length - 1)
	{
		if (f(tab[d], tab[d + 1]) < 0)
			return (0);
		d++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	if (is_sorted_up(tab, length, f) == 1
		|| is_sorted_down(tab, length, f) == 1)
		return (1);
	return (0);
}
