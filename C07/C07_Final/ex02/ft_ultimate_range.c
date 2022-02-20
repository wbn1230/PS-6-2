/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 14:31:03 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/17 15:42:25 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*array;

	if (min >= max)
		return (0);
	size = max - min;
	array = (int *)malloc(size * sizeof(int));
	if (array == NULL)
		return (-1);
	i = 0;
	*range = array;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return (size);
}
