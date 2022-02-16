/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonbpark <wonbpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 17:19:09 by wonbpark          #+#    #+#             */
/*   Updated: 2022/02/10 14:45:31 by wonbpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_low(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	check;

	ft_low(str);
	i = 0;
	check = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (check == 0)
				str[i] = str[i] - 32;
			check = 1;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			check = 1;
		else
			check = 0;
		i++;
	}
	return (str);
}
