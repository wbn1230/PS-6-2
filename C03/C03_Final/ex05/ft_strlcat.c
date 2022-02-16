/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 20:43:59 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/12 16:10:28 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destsize;
	unsigned int	srcsize;

	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	i = destsize;
	if (size == 0 || size <= destsize)
		return (srcsize + size);
	j = 0;
	while (src[j] != '\0' && j < size - destsize - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (destsize + srcsize);
}
