/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 16:07:13 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/12 18:51:28 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_range(int *range, int n)
{
	int	i;
	int	index;

	i = 0;
	index = 1;
	while (++i < n)
	{
		if (range[i - 1] >= range[i])
		{
			index = 0;
		}
	}
	if (!index)
		return ;
	i = -1;
	while (++i < n)
	{
		ft_putchar(range[i] + 48);
	}
	if (range[0] < (10 - n))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	range[10];

	if (n > 10 || n < 0)
		return ;
	i = -1;
	while (++i < n)
		range[i] = i;
	while (range[0] <= (10 - n) && n >= 1)
	{
		print_range(range, n);
		if (n == 10)
			break ;
		range[n - 1]++;
		i = n;
		while (i && n > 1)
		{
			i--;
			if (range[i] > 9)
			{
				range[i - 1]++;
				range[i] = 0;
			}
		}
	}
}

//void	ft_print_combn(int n)
//{
//	int		num;
//	char	arr[5];

//	arr[2] = ',';
//	arr[3] = ' ';
//	num = 1;
//	while (num <= 89)
//	{
//		arr[0] = (num / 10) + '0';
//		arr[1] = (num % 10) + '0';
//		if (arr[0] == '8' && arr[1] == '9')
//			write(1, arr, 2);
//		else
//			write(1, arr, 4);
//		num++;
//	}
//}
