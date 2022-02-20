/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 15:42:45 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/17 20:31:20 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strslen(char **strs, int size)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	return (len);
}

char	*ft_strjoin(int	size, char **strs, char *sep)
{
	int		i;
	int		malloc_len;
	char	*array;
	char	*zero;

	if (size == 0)
	{
		zero = (char *)malloc(1);
		zero[0] = '\0';
		return (zero);
	}
	malloc_len = ((ft_strlen(sep) * (size - 1)) + ft_strslen(strs, size) + 1);
	array = (char *)malloc(sizeof(char) * malloc_len);
	array[0] = '\0';
	i = 0;
	while (i < size)
	{
		array = ft_strcat(array, strs[i]);
		if (i < size - 1)
			array = ft_strcat(array, sep);
		i++;
	}
	array[malloc_len] = '\0';
	return (array);
}
