/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 16:28:15 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/20 18:47:56 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_double(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_valid(char *base)
{
	int	i;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if ((base[i] >= 9 && base[i] <= 13) || base[i] == 32)
			return (0);
		i++;
	}
	if (ft_check_double(base) == 0)
		return (0);
	return (1);
}

int	ft_n_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	ans;

	i = 0;
	sign = 1;
	ans = 0;
	if (ft_is_valid(base) == 0)
		return (0);
	while ((9 <= str[i] && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	while (ft_n_in_base(str[i], base) != -1)
	{
		ans = (ans * ft_strlen(base)) + ft_n_in_base(str[i], base);
		i++;
	}
	return (ans * sign);
}


char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	i;
	int	nb_from;
	int	nb_to;
	char	*res;

	if (ft_is_valid(base_from) == 0 || ft_is_valid(base_to) == 0)
		return (0);
	nb_from = ft_atoi_base(nbr, base_from);
	res = (char *)malloc(sizeof(char) * ft_strlen(base_to));
	nb_to = ft_putnbr_base(nb_from, base_to);
	/*nb_to = ft_atoi_base2(nb_from, base_to);*/

	return (res);
}




