/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:29:44 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/20 15:46:21 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int n)
{
	int	i;

	if (n <= 1)
		return (0);
	if (n == 2147483647)
		return (1);
	else if (n <= 3)
		return (1);
	else if (n % 2 == 0 || n % 3 == 0)
		return (0);
	i = 5;
	while (i * i <= n)
	{
		if (n % i == 0 || n % (i + 2) == 0)
			return (0);
		i += 6;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	next;

	if (nb <= 1)
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
}
