/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:50:30 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/16 19:45:10 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	ac;

	i = 1;
	ac = argc - 1;
	while (i <= ac)
	{
		while (*argv[i] != '\0')
		{	
			write(1, argv[i], 1);
			argv[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
/*{
	int	ac;

	ac = argc - 1;
	while (*argv[ac] != '\0')
	{
		write(1, argv[ac], 1);
		argv[ac]++;
	}
	write(1, "\n", 1);
	return (0);
}*/
