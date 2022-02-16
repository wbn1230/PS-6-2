/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:07:13 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/16 19:44:11 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	ac;

	i = 1;
	ac = argc - 1;
	while (ac >= i)
	{
		while (*argv[ac])
		{	
			write(1, argv[ac], 1);
			argv[ac]++;
		}
		write(1, "\n", 1);
		ac--;
	}
	return (0);
}
