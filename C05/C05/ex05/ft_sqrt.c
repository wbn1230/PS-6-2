/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:29:20 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/14 21:00:31 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	sqr;
	int	ldigit;

	ldigit = nb % 10;
	if (ldigit == 2 || ldigit == 3 || ldigit == 7 || ldigit == 8)
		return (0);
	i = 0;
	while (i <= 46340)
	{
		sqr = i * i;
		if (sqr == nb)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
