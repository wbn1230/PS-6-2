/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:44:30 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/22 17:02:41 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	ft_atoi_base(char *str, char *base);
int	ft_is_valid(char *base);

int	length_nbr(int nbr, char *base, int length)
{
	int				base_len;
	unsigned int	nb;

	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		nb = -nbr;
		length++;
	}
	else
		nb = nbr;
	while (nb >= (unsigned)base_len)
	{
		nb /= base_len;
		length++;
	}
	length++;
	return (length);
}

void	ft_putnbr_base(int nbr, char *base, char *res)
{
	int		base_len;
	long	nb;
	int		nb_from_len;

	base_len = ft_strlen(base);
	nb_from_len = length_nbr(nbr, base, 0);
	nb = (long)nbr;
	if (nb < 0)
	{
		res[0] = '-';
		nb *= -1;
	}
	res--;
	while (nb >= base_len)
	{
		res[nb_from_len] = base[nb % base_len];
		nb /= base_len;
		res--;
	}
	if (nb < base_len)
		res[nb_from_len] = base[nb];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		nb_from;
	int		length_nb_from;

	if (ft_is_valid(base_to) == 0 || ft_is_valid(base_from) == 0)
		return (0);
	nb_from = ft_atoi_base(nbr, base_from);
	length_nb_from = length_nbr(nb_from, base_to, 0);
	res = (char *)malloc(sizeof(char) * (length_nb_from) + 1);
	if (!res)
		return (0);
	ft_putnbr_base(nb_from, base_to, res);
	res[length_nb_from] = '\0';
	return (res);
}
