//01
#include <unistd.h>
#include "ft_boolean.h"
void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

t_bool	ft_is_even(int nbr)
{
	return ((EVEN(nbr)) ? TRUE : FALSE);
}

int	main(int argc, char **argv)
{
	(void) argv;
	if (ft_is_even(argc - 1) == TRUE)
		ft_putstr(EVEN_MSG);
	else
		ft_putstr(ODD_MSG);
	return(SUCCESS);
}

//02
#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	printf("%d\n", ABS(443));
	return (0);
}

//03
#include <stdlib.h>
#include <stdio.h>
#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int	main(void)
{
	t_point	*point;

	point=(t_point*)malloc(sizeof(int));
	set_point(point);
	printf("%d\n", point->x);
	printf("%d\n", point->y);

	return (0);
}

/*int main(void)
{
	t_point	point;

	set_point(&point);
	printf("%d\n", point.x);
	printf("%d\n", point.y);
	return(0);
}*/

//04 05
#include <stdio.h>
#include "./ex04/ft_strs_to_tab.c"
#include "./ex05/ft_show_tab.c"
#include "ft_stock_str.h"
int	main(int argc, char **argv)
{
	printf("--ex04, ex05-- [you should put arguments when you run program]\n");
	// ex04, ex05
	struct s_stock_str *stock_str;
	stock_str = ft_strs_to_tab(argc, argv);
	ft_show_tab(stock_str);
	for(int i=0;stock_str[i].str!=0;i++)
		free(stock_str[i].copy);
	free(stock_str);
	return (0);
}
