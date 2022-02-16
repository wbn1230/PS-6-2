/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 12:16:20 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/08 15:37:52 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		num1;
	int		num2;
	char	arr[8];

	arr[2] = ' ';
	arr[5] = ',';
	arr[6] = ' ';
	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			arr[0] = (num1 / 10) + '0';
			arr[1] = (num1 % 10) + '0';
			arr[3] = (num2 / 10) + '0';
			arr[4] = (num2 % 10) + '0';
			if (arr[0] == '9' && arr[1] == '8')
				write(1, arr, 5);
			else
				write(1, arr, 7);
			num2++;
		}
		num1++;
	}
}
