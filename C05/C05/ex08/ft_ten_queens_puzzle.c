/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:24:46 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/16 14:38:48 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_is_valid(int board[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (col == board[i] || (row - i) == (col - board[i])
			|| (i - row) == (col - board[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_Q(int board[10])
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(board[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

void	ft_check_Q(int board[10], int Q, int *solcount)
{
	int	i;

	if (Q == 10)
	{
		ft_print_Q(board);
		(*solcount)++;
		return ;
	}
	i = 0;
	while (i < 10)
	{
		i++;
		if (ft_is_valid(board, Q, i) == 0)
			continue ;
		board[Q] = i;
		ft_check_Q(board, Q + 1, solcount);
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];
	int	solcount;

	solcount = 0;
	ft_check_Q(board, 0, &solcount);
	return (solcount);
}
