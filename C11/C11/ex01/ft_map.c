/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 15:27:01 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/23 16:33:40 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*appf;

	appf = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		appf[i] = f(tab[i]);
		i++;
	}
	return (appf);
}
