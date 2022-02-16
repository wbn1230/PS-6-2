/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:58:58 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/16 19:38:09 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	ac;

	ac = argc - 1;
	while (*argv[ac] != '\0')
	{	
		write(1, argv[ac], 1);
		argv[ac]++;
	}
	write(1, "\n", 1);
	return (0);
}
