/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:32:06 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/17 14:18:11 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*array;

	if (min >= max)
		return (0);
	range = max - min;
	array = (int *)malloc(range * sizeof(int));
	i = 0;
	while (i < range)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}
