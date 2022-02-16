/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:29:44 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/16 13:36:05 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*int	ft_sqrt(int nb)
{
	int	i;
	int	sqr;

	i = 0;
	while (i <= 46340)
	{
		sqr = i * i;
		if (sqr > nb)
		{
			break ;
		}
		i++;
	}
	i--;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next;

	if (nb < 2)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	next = nb;
	while (next)
	{
		if (ft_is_prime(next) == 1)
			break ;
		next++;
	}
	return (next);
}*/
